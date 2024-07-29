#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<string, int> directory = {{"harry", 8435}, {"coding", 1213}}; // we can initiallize like this also
    // map<string, int, greater<string>> directory;

    directory["Hello"] = 121321; // this type also used to intialize
    directory["World"] = 21312;
    directory["Raj"] = 42232;
    directory.insert(make_pair("Bob", 2322)); // this type also used to insert value

    for (auto element : directory) // this is for each loop used to traverse and element is just a variable
    {
        cout << "Name - " << element.first << endl;    // .first point to the key
        cout << "Number - " << element.second << endl; // .second  sub value of the key
    }

    return 0;
}