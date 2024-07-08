#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int frogJump(int *h, int n, int i)
{
    if (i == n - 1)
        return 0;
    if (i == n - 2)
        return frogJump(h, n, i + 1) + abs(h[i] - h[i + 1]);

    return min(frogJump(h, n, i + 1) + abs(h[i] - h[i + 1]), frogJump(h, n, i + 2) + abs(h[i] - h[i + 2]));
}

int main()
{
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;
    cout << "\nEnter the stone height : \n ";

    int heights[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> heights[i];
    }

    int result = frogJump(heights, n, 0);
    cout << "The minimum cost to reach the last stone is: " << result << endl;
    return 0;
}
