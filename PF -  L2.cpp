#include <iostream>
using namespace std;

int main() {

    int amount, option, deposit, withdrawalamount;
    int balance = 1000;

    do {
        cout << "Select options from the menu" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Deposit Money" << endl;
        cout << "4. Exit" << endl;
        cin >> option;

        switch (option)
        {
            case 1:
                cout << "Your current balance is: " << balance <<"\n"<<endl;
                break;

            case 2:
            	cout<<"Enter amount to withdraw: ";
            	cin>>amount;
                if (amount <= balance) {
                	balance -+ amount;
                    cout << "Withdrawal amount is: " <<amount<<"\n" << endl;
                }
                else{
                	cout<<"Insufficient balance. Withdrawl denied!\n";
                	cout<<"\n";
				}
                break;

            case 3:
            	cout<<"Enter amount to deposit: ";
            	cin>>amount;
            	if(amount>0){
                balance += amount;
                cout << "Deposit Money is: " << balance <<"\n" << endl;
                }
                else{
                	cout<<"Invalid amount. Deposit denied.\n";
				}
                break;

            case 4:
                cout << "You have exited!" << endl;
                break;

            default:
                cout << "Option not available. Try again!" << endl;
                break;
        }

    } while (option != 4);

    return 0;
}

