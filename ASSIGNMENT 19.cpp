#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long binary;
    int decimal = 0, rem, i = 0;
    long long temp;

    cout << "Enter a binary number: ";
    cin >> binary;

    temp = binary;

    while (temp != 0) {
        rem = temp % 10;
        decimal += rem * pow(2, i);
        temp /= 10;
        i++;
    }

    cout << "\nDecimal     : " << decimal << endl;
    cout << "Octal       : " << oct << decimal << endl;
    cout << "Hexadecimal : " << hex << uppercase << decimal << endl;

    return 0;
}