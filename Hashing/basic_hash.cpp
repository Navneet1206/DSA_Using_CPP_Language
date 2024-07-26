#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n, fun = 0;
    cout << "enter the values from 1-10 : ";
    cin >> n;
    cout << "enter the numbers : ";
    for (int i = 0; i < n; i++)
    {
        int x = NULL;
        cin >> x;
        fun = x % 10;
        arr[fun] = x;
    }
    cout << endl<<"Inserted elements\n";
    for(int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout << "enter the target number : ";
    cin >> target;

    fun = 0;
    fun = target % 10;
    if (arr[fun] == target)
    {
        cout << "Element is present in the index of : " << fun << endl;
    }
    else
    {
        cout << "Element is not inserted";
    }

    return 0;
}