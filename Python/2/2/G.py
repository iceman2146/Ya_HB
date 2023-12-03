word = input()
word_reversed = word[::-1]  
if word == word_reversed:
    print(f"YES")
else:
    print(f"NO")
