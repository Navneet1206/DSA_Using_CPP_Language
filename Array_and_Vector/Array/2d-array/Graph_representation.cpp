#include <iostream>
using namespace std;
int main()
{
    string graph[5][5] = {{"0", "AB", "0", "0", "0"}, {"0", "0", "BC", "BD", "0"}, {"0", "0", "0", "0", "CE"}, {"DA", "0", "0", "0", "0"}, {"0", "0", "0", "ED", "0"}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}