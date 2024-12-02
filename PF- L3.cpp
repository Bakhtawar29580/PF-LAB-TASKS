#include <iostream>
using namespace std;

int main() {
    int num, oddcounter = 0, evencounter = 0;

    cout << "Enter a number: " << endl;
    cin >> num;


    while (num != 0) {
    	
        if (num % 2 == 0) {
            evencounter = evencounter + 1;         
        }
        else{
        	oddcounter= oddcounter + 1;
		}
		
        cin>>num;
    }
    cout<<"\nProgram finishes.\nFinal counts:- \n"<<"Even ="<<evencounter<< "\n"<<"Odd = "<<oddcounter<<"\n";
        
    return 0;      
}  


