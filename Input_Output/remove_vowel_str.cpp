#include <iostream>
using namespace std;

int main()
{
    char arr[10]="NAvneet";
    int i;

    cout << "Entered string: ";
    for (i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] ;
    }

    cout<<"\n";

    for (i = 0; arr[i] != '\0'; i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U')
        cout<<"";
        else
        cout << arr[i];
    }

    return 0;
}
