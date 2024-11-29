#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("chcp 65001");
    unsigned int n;
    cout << "Введіть невід'ємне ціле число: ";
    cin >> n;

    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            n /= 10;
            count++;
        }
    }

    cout << "Кількість цифр у числі: " << count << endl;

    return 0;
}