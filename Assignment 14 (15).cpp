#include <iostream>
#include <string>
using namespace std;

int main() {
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;

    int decimal = stoi(bin, nullptr, 2);
    cout << "Decimal: " << decimal << endl;

    cout << "Hexadecimal: " << hex << decimal << endl;
    cout << "Octal: " << oct << decimal << endl;

    return 0;
}

