#include <iostream>
using namespace std;

int main(){	

	int num1,num2,choice,add,sub,mul,div;	
    do{
    	cout<<"Menu to choose an operation: \n";
	    cout<<"1: Addition \n";
	    cout<<"2: Subtraction \n";
	    cout<<"3: Multiplication \n";
	    cout<<"4: Division \n";
	    cout<<"5: Exit \n";
        cin>>choice;
        cout<<"\n";
    
        switch(choice){
        	case 1:
        		cout<<"Enter two numbers: \n";
				cin>>num1>>num2;
				add = num1 + num2;
				cout<<"Adding both we get: "<<add<<"\n"<<endl;
    		    break;
    		    
    		case 2:
    			cout<<"Enter two numbers: \n";
				cin>>num1>>num2;
				sub = num1 - num2;
				cout<<"Subtracting both we get: "<<sub<<"\n"<<endl;
    		    break;
    		    
    		case 3:
    			cout<<"Enter two numbers: \n";
    		    cin>>num1>>num2;
    		    mul = num1 * num2;
    		    cout<<"Multiplying both we get: \n"<<mul<<"\n"<<endl;
    		    break;
    		    
    		case 4:
    		    cout<<"Enter two numbers: \n";
    		    cin>>num1>>num2;
    		    div = num1 / num2;
    		    cout<<"Dividing both we get: \n"<<div<<"\n"<<endl;
    		    break;
    		    
    		case 5:
    			cout<<"Exited \n";
    			break;
    		    
    	    default:
    	    	cout<<"Incorrect input. Try again! \n"<<endl;
    	    	break;
	    }
    } while(choice != 5);	
	return 0;	
}

