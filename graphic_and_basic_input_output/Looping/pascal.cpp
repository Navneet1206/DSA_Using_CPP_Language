#include <iostream>
using namespace std;
int main()
{
    int user, pas = 1, i, j, store;

    cout << "Enter number of rows you want in pascal triangle : ";
    cin >> user;
    if (user > 0)
    {
        cout << pas << endl;
    }

    for (i = 1; i <= user; i++)
    {

        pas = pas * 11;
        for (j = pas; j != 0; j = j / 10)
        {
            store = j % 10;
            cout << store << " ";
        }
        cout << endl;
    }

    return 0;
}