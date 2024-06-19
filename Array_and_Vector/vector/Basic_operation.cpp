#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;

    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(1); // insert the vector to have a size of 1
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2); // insert the vector to have a size of 2
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(3); // insert the vector to have a size of 3
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(4); // insert the vector to have a size of 4
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(5); // insert the vector to have a size of 5
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.resize(10);
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "Size : " << v.size() << endl;
    cout << "Capacity : " << v.capacity() << endl;

    return 0;
}