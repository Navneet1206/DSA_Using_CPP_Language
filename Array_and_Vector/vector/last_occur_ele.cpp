#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);

    cout << "Enter 6 integers: ";
    for (int i = 0; i < 6; ++i)
    {
        cin >> v[i];
    }

    cout << "Enter x element : ";
    int x;
    cin >> x;
    /*Indirect method for  finding the occurance
    int occurance=-1;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {
            occurance=i;
            ++occurance;
        }
    }
    cout<<occurance<<endl;
    */
    
    //Direct method
    for (int i = v.size(); i >= 0; i--)
    {
        if (v[i] == x)
        {
            cout << i + 1 << endl;
            exit(0);
        }
    }
    cout<<"not found";
    return 0;
}