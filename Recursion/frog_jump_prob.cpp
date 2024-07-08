#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int frogJump(const vector<int>& heights) {
    int n = heights.size();
    if (n == 0) return 0;

    // dp[i] will hold the minimum cost to reach stone i
    vector<int> dp(n, 0);

    // Base cases
    dp[0] = 0; // Cost to reach the first stone is 0

    // Initialize the second stone cost if it exists
    if (n > 1) {
        dp[1] = abs(heights[1] - heights[0]);
    }

    // Fill the dp array
    for (int i = 2; i < n; ++i) {
        int jumpOne = dp[i - 1] + abs(heights[i] - heights[i - 1]);
        int jumpTwo = dp[i - 2] + abs(heights[i] - heights[i - 2]);
        dp[i] = min(jumpOne, jumpTwo);
    }

    // The minimum cost to reach the last stone
    return dp[n - 1];
}

int main() {
    int n;
    cout << "Enter the number of stones: ";
    cin >> n;

    vector<int> heights(n);
    cout << "Enter the heights of the stones: ";
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int result = frogJump(heights);
    cout << "The minimum cost to reach the last stone is: " << result << endl;
    return 0;
}

