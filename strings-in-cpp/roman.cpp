#include <iostream>
#include <string>
using namespace std;

// Function to convert a number up to 3999 to Roman numeral
string intToRoman(int num) {
    const string thousands[] = {"", "M", "MM", "MMM"};
    const string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const string units[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    string result = thousands[num / 1000] +
                    hundreds[(num % 1000) / 100] +
                    tens[(num % 100) / 10] +
                    units[num % 10];

    return result;
}

// Function to convert an arbitrarily large number to an extended Roman numeral-like system
string largeNumberToRoman(long long num) {
    string result = "";
    long long base = 1000;
    int baseIndex = 0;

    while (num > 0) {
        int remainder = num % base;
        num /= base;

        string romanPart = intToRoman(remainder);
        if (baseIndex > 0) {
            for (int i = 0; i < baseIndex; ++i) {
                romanPart += "_"; // Adding underscores to denote higher magnitudes
            }
        }
        result = romanPart + result;

        ++baseIndex;
    }

    return result;
}

int main() {
    long long number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Roman numeral: " << largeNumberToRoman(number) << endl;

    return 0;
}
