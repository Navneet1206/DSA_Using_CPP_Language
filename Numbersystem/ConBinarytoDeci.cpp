#include<iostream>
using namespace std;

int main() {
    int n, mod= 1,ans=0;
    int power=1;
    cout << "Enter the binary number: ";
    cin >> n;

    for(;n>0;n/=10)
    {
        mod=n%10;
        ans=ans+mod*power;
        power=power*2;
    }

    cout << "Decimal notation of the binary number is: " << ans << endl;

    return 0;
}
