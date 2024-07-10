# Vector Operations in C++

This repository contains a C++ program that demonstrates various operations of the `std::vector` class, including initialization, insertion, deletion, access, iteration, and more.

## Description

The program showcases the following vector operations:
1. **Initialization**: Different ways to initialize a vector.
2. **Adding Elements**: Using `push_back` to add elements to the end of the vector.
3. **Accessing Elements**: Accessing elements using `front`, `back`, and the `[]` operator.
4. **Modifying Elements**: Modifying elements within the vector.
5. **Inserting Elements**: Inserting elements at a specific position using `insert`.
6. **Removing Elements**: Removing elements using `erase` and `pop_back`.
7. **Iterating**: Iterating over the vector using iterators.
8. **Size and Capacity**: Getting the size and capacity of the vector.
9. **Resizing**: Resizing the vector using `resize`.
10. **Sorting**: Sorting the vector using `sort`.
11. **Clearing**: Clearing all elements from the vector using `clear`.

## Usage

To compile and run the program, follow these steps:

1. Clone the repository:
    ```sh
    git clone <repository-url>
    ```

2. Navigate to the project directory:
    ```sh
    cd <repository-directory>
    ```

3. Compile the program using a C++ compiler (e.g., `g++`):
    ```sh
    g++ vector_operations.cpp -o vector_operations
    ```

4. Run the executable:
    ```sh
    ./vector_operations
    ```

## Code

Here is the main code for the vector operations:

```cpp
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
