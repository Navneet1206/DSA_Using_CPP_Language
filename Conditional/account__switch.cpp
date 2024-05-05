#include<iostream>
#include<stdlib.h>
using namespace std;

class account
{
private:
    float balance;
    float interestRate;
    int timePeriod;

public:
    account() {
        balance = 0;
        interestRate = 0;
        timePeriod = 0;
    }

    void setInterest(float rate, int time) {
        interestRate = rate;
        timePeriod = time;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount " << amount << " deposited successfully." << endl;
    }

    void withdraw(float amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Amount " << amount << " withdrawn successfully." << endl;
        }
        else {
            cout << "Insufficient balance." << endl;
        }
    }

    void computeInterest() {
        float interest = balance * interestRate * timePeriod / 100;
        cout << "Interest computed: " << interest << endl;
    }

    void showBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main()
{
    account obj;
    int choice;
    float amount;
    float rate;
    int time;

    while(true) {
        cout << "\n\n1. Compute interest\n";
        cout << "2. Show balance\n";
        cout << "3. Withdraw\n";
        cout << "4. Deposit\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                obj.computeInterest();
                break;
            case 2:
                obj.showBalance();
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                obj.withdraw(amount);
                break;
            case 4:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                obj.deposit(amount);
                break;
            case 5:
                exit(0);
            default:
                cout << "Wrong choice" << endl;
                break;
        }
    }

    return 0;
}
