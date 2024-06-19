#include <iostream>
#include <vector> // Include the vector library
using namespace std;

class short_0_1 {
public:
    void sorting_0_1(int size) {
        int count_zero = 0;
        vector<int> arr(size); // Use vector instead of VLA
        
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        int left_ptr = 0;
        int right_ptr = size - 1;

        while (left_ptr < right_ptr) {
            if (arr[left_ptr] == 1 && arr[right_ptr] == 0) {
                arr[left_ptr++] = 0;
                arr[right_ptr--] = 1;
            }

            // Correct the conditions
            if (arr[left_ptr] == 0) 
                left_ptr++;

            if (arr[right_ptr] == 1) 
                right_ptr--;
        }

        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    short_0_1 obj;
    int n = 10;
    cout << "Enter the elements : \n";
    obj.sorting_0_1(n);

    return 0;
}
