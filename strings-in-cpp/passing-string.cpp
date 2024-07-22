#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Pass by value
void passByValue(string str)
{
    cout << "Passed by value: " << str << endl;
}

// Pass by non-const reference (allows modification)
void passByReference(string &str)
{
    str += " (modified)";
    cout << "Passed by reference: " << str << endl;
}

// Pass by const reference (no modification allowed)
void passByConstReference(const string &str)
{
    cout << "Passed by const reference: " << str << endl;
}

// Pass by non-const pointer (allows modification)
void passByPointer(string *str)
{
    if (str)
    {
        *str += " (modified)";
        cout << "Passed by pointer: " << *str << endl;
    }
}

// Pass by const pointer (no modification allowed)
void passByConstPointer(const string *str)
{
    if (str)
    {
        cout << "Passed by const pointer: " << *str << endl;
    }
}

// Pass C-style string by non-const pointer to char (allows modification)
void passCStyleString(char *str)
{
    if (str)
    {
        strcat(str, " (modified)");
        cout << "Passed C-style string: " << str << endl;
    }
}

// Pass C-style string by const pointer to char (no modification allowed)
void passConstCStyleString(const char *str)
{
    if (str)
    {
        cout << "Passed const C-style string: " << str << endl;
    }
}

int main()
{
    // string initializations
    string s;
    string s2;
    string s3;
    string s4;
    string s5;

    // C-style string initialization
    char cstr[50] = "Hello, World!";
    const char *const_cstr = "Hello, World!";

    // Taking input from the user
    cout << "Enter a string with spaces for s: ";
    getline(cin, s);

    cout << "Enter a string with spaces for s2: ";
    getline(cin, s2);

    cout << "Enter a string with spaces for s3: ";
    getline(cin, s3);

    cout << "Enter a string with spaces for s4: ";
    getline(cin, s4);

    cout << "Enter a string with spaces for s5: ";
    getline(cin, s5);

    // Function calls
    passByValue(s);
    passByReference(s2);
    passByConstReference(s3);
    passByPointer(&s4);
    passByConstPointer(&s5);
    passCStyleString(cstr);
    passConstCStyleString(const_cstr);

    // Output modified strings
    cout << "\nOriginal strings after modification (if applicable):" << endl;
    cout << "s: " << s << endl;                   // unchanged
    cout << "s2: " << s2 << endl;                 // modified
    cout << "s3: " << s3 << endl;                 // unchanged
    cout << "s4: " << s4 << endl;                 // modified
    cout << "s5: " << s5 << endl;                 // unchanged
    cout << "cstr: " << cstr << endl;             // modified
    cout << "const_cstr: " << const_cstr << endl; // unchanged

    return 0;
}
