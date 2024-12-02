#include <iostream>
using namespace std;

int main()
{
    int option, totalbill;
    int bill = 0;

    do {
        cout << "Select options from the menu" << endl;
        cout << "1. Tea       $2" << endl;
        cout << "2. Coffee    $3" << endl;
        cout << "3. Sandwich  $5" << endl;
        cout << "4. Burger    $7" << endl;
        cout << "5. Exit" << endl;
        cin >> option;

        switch (option)
        {
            case 1:
                cout << "You have selected tea" << endl;
                bill = bill + 2;
                cout << "Your total bill is: " <<"$"<<bill<<"\n"<<endl;
                break;

            case 2:
                cout << "You have selected coffee" << endl;
                bill = bill + 3;
                cout << "Your total bill is: " <<"$"<<bill<<"\n"<<endl;
                break;
           
            case 3:
                cout << "You have selected sandwich" << endl;
                bill = bill + 5;
                cout << "Your total bill is: " <<"$"<<bill<<"\n"<<endl;
                break;

            case 4:
                cout << "You have selected burger" << endl;
                bill = bill + 7;
                cout << "Your total bill is: " <<"$"<<bill<<"\n"<<endl;
                break;

            case 5:
                cout << "Exit" << endl;
                cout << "Your total bill is: " <<"$"<<bill<<"\n"<< endl;
                break;

            default:
                cout << "Option not available" << endl;
                break;
    }

} while (option != 5);

return 0;
}


