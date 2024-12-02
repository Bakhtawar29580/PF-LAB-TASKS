#include <iostream>
using namespace std;
/*Write a program to validate a password. The program should:
1. Set a predefined password (e.g., "1234").
2. Allow the user three attempts to enter the correct password.
3. Display "Access granted" if the password is correct.
4. Display "Access denied" if all attempts are used up without success.
5. End the program after three attempts or a successful entry.

Problem Requirements:
Åú Use a for loop to allow up to three attempts.
Åú Use an if condition to check the password.
Åú Use a break statement to exit the loop when the password is correct. */

int main(){
	
	int pass, corr_pass = 1234;
	const int max_attempts = 3;
	
	for (int attempts=1; attempts<= max_attempts; attempts++){
		cout<<"Enter password:";
		cin>>pass;
		
		if (pass==corr_pass){
			cout<<"Access granted! \n";	
			return 0;		
			
		} else{
			cout<<"Access denied! \n";
			
			if(attempts < max_attempts){
				cout<<"Attempts left: "<<max_attempts - attempts<<endl;				
			} else{
				cout<<"You have been locked!";
			}	
		}	
	}
	return 0;	
} 



