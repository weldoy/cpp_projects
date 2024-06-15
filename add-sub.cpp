#include <iostream>

using namespace std;

int main() {
    int a, b; // обьявление переменной
    cin >> a >> b; // Забирает переменные в коробку console in
    cout << a << " + " << b << " = " << a + b << endl; // Выводим результат сложения
    // << endl = перенос на новую строку 'end line'
    cout << a << " - " << b << " = " << a - b;
    return 0;
}
