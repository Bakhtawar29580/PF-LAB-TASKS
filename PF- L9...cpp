#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	int n;
	
	cout<<"Enter  positive integer n: \n";
	cin>>n;
	
	if(n<=0){ // Validating input to ensure n is positive
		cout<<"Please enter a positive value! ";
		return 0; //exiting if n -ve
	}
	
	// table coloumns description 
	cout << left << setw(10) << "Number" 
         << setw(10) << "Square" 
         << setw(10) << "Cube" << endl;
    
	for(int i = 1; i <= n; i++){ // to output table
		
		cout<< left<< setw(10)<< i // printing no.
		    << setw(10) << (i * i) // printing sq
            << setw(10) << (i * i * i) << endl; // printing cube
		
	}
	
	return 0;	
}

