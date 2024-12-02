#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout<<"Enter  positive integer n: \n";
	cin>>n;
	
	for (int n = 5; n >= 1; n--){
		
		for(int j = 1; j <= n; j++)
		
		   cout<<j;
		cout<<endl;
	}
	return 0;
}



