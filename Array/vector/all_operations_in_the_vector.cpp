#include <iostream>
#include <vector>
#include <algorithm> // For sort and find

using namespace std;

int main()
{
    // 1. Initializing vectors
    vector<int> v1;                   // Empty vector
    vector<int> v2(5, 10);            // Vector with 5 elements, each initialized to 10
    vector<int> v3 = {1, 2, 3, 4, 5}; // Initializer list

    // 2. Adding elements
    v1.push_back(6);
    v1.push_back(7);
    v1.push_back(8);

    // 3. Accessing elements
    cout << "First element of v1: " << v1[0] << endl;
    cout << "Second element of v2: " << v2.at(1) << endl;

    // 4. Iterating through elements
    cout << "Elements of v3: ";
    for (int i = 0; i < v3.size(); ++i)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // Using iterator
    cout << "Elements of v1 using iterator: ";
    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // 5. Removing elements
    v1.pop_back(); // Remove the last element
    cout << "v1 after pop_back: ";
    for (int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;

    v3.erase(v3.begin() + 2); // Remove the element at index 2
    cout << "v3 after erase: ";
    for (int elem : v3)
    {
        cout << elem << " ";
    }
    cout << endl;

    // 6. Inserting elements
    v3.insert(v3.begin() + 1, 10); // Insert 10 at index 1
    cout << "v3 after insert: ";
    for (int elem : v3)
    {
        cout << elem << " ";
    }
    cout << endl;

    // 7. Sorting elements
    sort(v1.begin(), v1.end());
    cout << "v1 after sort: ";
    for (int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;

    // 8. Finding an element
    auto it = find(v3.begin(), v3.end(), 10);
    if (it != v3.end())
    {
        cout << "Element 10 found in v3 at index: " << distance(v3.begin(), it) << endl;
    }
    else
    {
        cout << "Element 10 not found in v3" << endl;
    }

    // 9. Resizing vector
    v1.resize(2);
    cout << "v1 after resize: ";
    for (int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;

    // 10. Clearing vector
    v1.clear();
    cout << "v1 after clear: ";
    for (int elem : v1)
    {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
