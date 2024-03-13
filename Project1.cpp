#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter Number: ";
    cin >> num;

    for (int i = 0; i < num; i++) {
        string spaces(num - i - 1, ' ');
        string numbers(2 * i + 1, i + '0');
        cout << spaces << numbers << endl;
    }

    return 0;
}
