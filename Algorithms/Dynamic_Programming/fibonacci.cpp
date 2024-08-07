#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the nth Fibonacci number using dynamic programming
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    // Create a vector to store Fibonacci numbers up to n
    vector<int> fib(n + 1);

    // Initialize the first two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    // Fill the vector with Fibonacci numbers up to n
    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Return the nth Fibonacci number
    return fib[n];
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "The " << n << "-th Fibonacci number is: " << result << endl;

    return 0;
}
