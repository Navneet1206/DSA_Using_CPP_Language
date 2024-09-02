#include <iostream>
#include <cctype> // Include the cctype header
using namespace std;
int main()
{
    char ch;

    // Example of character classification
    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch))
    {
        cout << ch << " is an alphabetic character." << endl;
    }
    else if (isdigit(ch))
    {
        cout << ch << " is a digit." << endl;
    }
    else if (isspace(ch))
    {
        cout << "You entered a whitespace character." << endl;
    }
    else
    {
        cout << ch << " is a punctuation or special character." << endl;
    }

    // Example of character conversion
    char upper = 'A';
    char lower = 'a';

    cout << "Lowercase of " << upper << " is " << (char)tolower(upper) << endl;
    cout << "Uppercase of " << lower << " is " << (char)toupper(lower) << endl;

    return 0;
}
