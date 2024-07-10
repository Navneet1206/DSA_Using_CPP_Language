#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to print a vector
void printVector(const vector<int>& vec) {
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // Initialization
    vector<int> vec1; // Empty vector
    vector<int> vec2(5, 10); // Vector of size 5, all elements initialized to 10
    vector<int> vec3 = {1, 2, 3, 4, 5}; // Initializer list

    cout << "Initial vectors:" << endl;
    cout << "vec1: ";
    printVector(vec1);
    cout << "vec2: ";
    printVector(vec2);
    cout << "vec3: ";
    printVector(vec3);

    // Adding elements
    vec1.push_back(6); // Add element to the end
    vec1.push_back(7);

    // Accessing elements
    cout << "Accessing elements:" << endl;
    cout << "First element of vec3: " << vec3.front() << endl; // First element
    cout << "Last element of vec3: " << vec3.back() << endl; // Last element
    cout << "Element at index 2 in vec3: " << vec3[2] << endl; // Element at index 2

    // Modifying elements
    vec3[2] = 30;
    cout << "Modified vec3: ";
    printVector(vec3);

    // Inserting elements
    vec3.insert(vec3.begin() + 1, 20); // Insert 20 at index 1
    cout << "After inserting 20 at index 1: ";
    printVector(vec3);

    // Removing elements
    vec3.erase(vec3.begin() + 1); // Remove element at index 1
    cout << "After erasing element at index 1: ";
    printVector(vec3);
    vec3.pop_back(); // Remove last element
    cout << "After popping back: ";
    printVector(vec3);

    // Iterating over a vector
    cout << "Iterating using iterator:" << endl;
    for (auto it = vec3.begin(); it != vec3.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Size and capacity
    cout << "Size of vec3: " << vec3.size() << endl;
    cout << "Capacity of vec3: " << vec3.capacity() << endl;

    // Resizing
    vec3.resize(10, 100); // Resize to 10 elements, new elements initialized to 100
    cout << "After resizing vec3 to 10 elements: ";
    printVector(vec3);

    // Sorting
    sort(vec3.begin(), vec3.end()); // Sort the vector
    cout << "After sorting vec3: ";
    printVector(vec3);

    // Clearing the vector
    vec3.clear();
    cout << "After clearing vec3, size: " << vec3.size() << endl;

    return 0;
}
