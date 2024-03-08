#include<iostream>
using namespace std;

int main() {
    int i, min = INT_MAX; // Start min with the maximum possible integer value
    int arr[10] = {0, 55, 4, 33, 22, 33, 5, -1, -34, 44};

    for(i = 0; i < 10; i++) {
        if(min > arr[i])
            min = arr[i];
    }

    cout << "Minimum value: " << min << endl;
    return 0;
}
