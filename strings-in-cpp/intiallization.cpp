#include <iostream>
#include <string>
using namespace std;

int main()
{
    // C-style string initializations
    char cstr1[] = "Hello, World!";
    char cstr2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    const char *cstr3 = "Hello, World!";

    cout << "C-style strings:" << endl;
    cout << "cstr1: " << cstr1 << endl;
    cout << "cstr2: " << cstr2 << endl;
    cout << "cstr3: " << cstr3 << endl;

    // string initializations
    string str1;                                 // Default initialization
    string str2 = "Hello, World!";               // Initialization with a C-string literal
    string str3(str2);                           // Copy initialization
    string str4(5, 'A');                         // Initialization with character repetition
    string str5(str2, 7, 5);                     // Initialization with part of another string
    string str6(str2.begin(), str2.begin() + 5); // Initialization with an iterator range

    cout << "\nstring initializations:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;
    cout << "str3: " << str3 << endl;
    cout << "str4: " << str4 << endl;
    cout << "str5: " << str5 << endl;
    cout << "str6: " << str6 << endl;

    return 0;
}
