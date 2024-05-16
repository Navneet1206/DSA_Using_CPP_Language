#include<iostream>
using namespace std;

int main() {
    int n, num = 0, power = 1;
    cout << "Enter the decimal number: ";
    cin >> n;

    for(;n>0;n/=2)
    {
        int mod = n % 2;
        num += mod * power;
        
        power *= 10;
    }

    cout << "Binary notation of the number: " << num << endl;

    return 0;
}
