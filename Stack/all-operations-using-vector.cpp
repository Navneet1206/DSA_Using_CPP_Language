#include <iostream>
#include <vector>
using namespace std;

vector<int> v(100);
int last = -1;
void push_stack()
{
    int newdata;
    cout << "Enter the element : ";
    cin >> newdata;
    if (last == v.size())
    {
        cout << "Stack is overflow";
        return;
    }
    v[++last] = newdata;
}
void pop_stack()
{
    if (last == -1)
    {
        cout << "Stack is underFlow";
        return;
    }
    cout << v[last--] << " is deleted";
}
void access()
{
    int random, i;
    cout << "Enter the position : ";
    cin >> random;
    if (random > last || last == -1)
    {
        cout << "Element not exist in desired position";
        return;
    }
    for (i = 0; i < random; i++)
    {
    }
    cout << "element is present in index " << i << " is " << v[i];
}
void traversal_stack()
{
    if (last == -1)
    {
        cout << "Stack is underFlow";
        return;
    }
    for (int i = 0; i <= last; i++)
    {
        cout << " " << v[i];
    }
}
int main()
{
    int choice;
    while (1)
    {
        cout << "\n1. for push : ";
        cout << "\n2. for pop : ";
        cout << "\n3. Access at random : ";
        cout << "\n4. Traversal of stack : ";
        cout << "\n5. Exit ";
        cout << "\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {

        case 1:
            push_stack();
            break;
        case 2:
            pop_stack();
            break;
        case 3:
            access();
            break;
        case 4:
            traversal_stack();
            break;
        case 5:
            cout << "Exited";
            exit(0);
        default:
            cout << "Invalid input! Try again";
            break;
        }
    }
    return 0;
}