#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> seats(n+1); // Используем n+1, чтобы индексация начиналась с 1, а не с 0
    for (int i = 1; i <= n; i++) {
        int seat;
        cin >> seat;
        seats[seat] = i; // Сохраняем номер гостя на соответствующем месте
    }
    for (int i = 1; i <= n; i++) {
        cout << seats[i] << endl;
    }
    return 0;
}
