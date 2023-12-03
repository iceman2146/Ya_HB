$folderPath = "../2"
# Функция для пересохранения файла из кодировки UTF-8 с BOM в кодировку UTF-8 без BOM
function ConvertToUtf8WithoutBom($filePath) {
    $content = Get-Content -Path $filePath -Raw
    [System.IO.File]::WriteAllLines($filePath, $content, (New-Object System.Text.UTF8Encoding($false)))
}

# Рекурсивная функция для обхода всех файлов в указанной директории и ее поддиректориях
function RecursivelyConvertFiles($directory) {
    # Получаем все файлы с расширением .py в текущей директории
    $files = Get-ChildItem -Path $directory -File -Filter "*.py"

    # Перебираем каждый файл
    foreach ($file in $files) {
        # Проверяем, является ли файл в кодировке UTF-8 с BOM
        $encoding = Get-Content -Path $file.FullName -Encoding Byte -TotalCount 3
        if ($encoding -ne $null -and $encoding[0] -eq 0xEF -and $encoding[1] -eq 0xBB -and $encoding[2] -eq 0xBF) {
            Write-Host "Converting file: $($file.FullName)"
            ConvertToUtf8WithoutBom -filePath $file.FullName
        }
    }

    # Рекурсивно вызываем функцию для каждой поддиректории
    $subDirectories = Get-ChildItem -Path $directory -Directory
    foreach ($subDirectory in $subDirectories) {
        RecursivelyConvertFiles -directory $subDirectory.FullName
    }
}

# Вызываем рекурсивную функцию для указанной папки
RecursivelyConvertFiles -directory $folderPath
