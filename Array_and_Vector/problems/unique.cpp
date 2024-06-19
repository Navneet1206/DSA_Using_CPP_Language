#include <iostream>
using namespace std;
int main()
{
    int arr[5];

    cout << "Enter Array positive Elements : \n";

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
   
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i]=arr[j]=-1;
            }
        }
    }
    
    cout<<"\nUnique elements  are :\n";
    for(int i=0;i<5;i++)
    {
        if(arr[i]>=0)
        {
        
        cout << arr[i] <<endl;
        }
    }
    
    return 0;
}