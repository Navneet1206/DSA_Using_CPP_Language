#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> directory;
    // map<string, int, greater<string>> directory;

    directory["Hello"] = 121321;
    directory["World"] = 21312;
    directory["Raj"] = 42232;

    for (auto element : directory)
    {
        cout << "Name - " << element.first << endl;
        cout << "Number - " << element.second << endl;
    }

    return 0;
}