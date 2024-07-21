#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Creating and initializing strings
    string str1 = "Hello, ";
    string str2 = "World!";
    string str3;

    // Length of a string
    cout << "Length of str1: " << str1.length() << endl;

    // Concatenation of strings
    str3 = str1 + str2;
    cout << "Concatenated string (str1 + str2): " << str3 << endl;

    // Accessing characters in a string
    char ch = str1[1];
    cout << "Character at index 1 in str1: " << ch << endl;

    // Modifying characters in a string
    str1[0] = 'h';
    cout << "Modified str1: " << str1 << endl;

    // Substring
    string sub = str3.substr(7, 5); // Extract "World"
    cout << "Substring of str3: " << sub << endl;

    // Find a substring
    size_t pos = str3.find("World");
    if (pos != string::npos)
    {
        cout << "'World' found at position: " << pos << endl;
    }
    else
    {
        cout << "'World' not found" << endl;
    }

    // Replace a substring
    str3.replace(7, 5, "Universe");
    cout << "Replaced string (str3): " << str3 << endl;

    // Erase a portion of a string
    str3.erase(7, 8); // Erase "Universe"
    cout << "String after erase (str3): " << str3 << endl;

    // Insert into a string
    str3.insert(7, "World");
    cout << "String after insert (str3): " << str3 << endl;

    // Comparing strings
    if (str1 == str2)
    {
        cout << "str1 and str2 are equal" << endl;
    }
    else
    {
        cout << "str1 and str2 are not equal" << endl;
    }

    if (str1 < str2)
    {
        cout << "str1 is less than str2" << endl;
    }
    else
    {
        cout << "str1 is not less than str2" << endl;
    }

    // Clearing a string
    str1.clear();
    cout << "str1 after clear: " << str1 << endl;

    // Checking if a string is empty
    if (str1.empty())
    {
        cout << "str1 is empty" << endl;
    }
    else
    {
        cout << "str1 is not empty" << endl;
    }

    // Convert C-string to string
    const char *cstr = "C-string";
    string stdStr = cstr;
    cout << "Converted C-string to string: " << stdStr << endl;

    // Convert string to C-string
    const char *cstr2 = stdStr.c_str();
    cout << "Converted string to C-string: " << cstr2 << endl;

    return 0;
}
