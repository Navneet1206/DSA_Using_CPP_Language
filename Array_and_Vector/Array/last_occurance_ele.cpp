#include <iostream>
using namespace std;
int main()
{
    int i, occr[10] = {1, 45, 66, 44, 1, 56, 1, 93, 1, 67};

    for (i = 9; i >= 0; i--)
    {
        if (occr[i] == 1)
        {
            cout << i + 1 << "th is the last position of one"
                 << "\n";
            break;
        }
    }
    return 0;
}