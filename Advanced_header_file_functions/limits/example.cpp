#include <iostream>
#include <limits>
using namespace std;
int main() {
    // For int
    cout << "int max: " << numeric_limits<int>::max() << endl;
    cout << "int min: " << numeric_limits<int>::min() << endl;

    // For float
    cout << "float max: " << numeric_limits<float>::max() << endl;
    cout << "float min: " << numeric_limits<float>::min() << endl;

    // For double
    cout << "double max: " << numeric_limits<double>::max() << endl;
    cout << "double min: " << numeric_limits<double>::min() << endl;

    // For long long
    cout << "long long max: " << numeric_limits<long long>::max() << endl;
    cout << "long long min: " << numeric_limits<long long>::min() << endl;

    return 0;
}
