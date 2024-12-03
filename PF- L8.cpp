#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout<<"Enter  positive integer n: \n";
	cin>>n;
	
	if (n <= 0) {
        cout << "Please enter a positive integer!" << endl;
        return 0; // exit program if no. invalid
    }
	
	for (int i = n; i >= 1; i--){ //loop for rows
		
		for(int j = i; j >= 1; j--){ // loop to print no.s in reverse order
		
		
		   cout<<j<<" "; //loop to print no. & space
	    }
		cout<<endl;
	}
	return 0;
}

