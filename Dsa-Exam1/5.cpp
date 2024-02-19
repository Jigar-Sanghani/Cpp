#include<iostream>
using namespace std;

int main()
{
	int n1,n2,choice; 
	
	cout<<"Enter First Number :";
	cin>>n1;
	cout<<"Enter Second Number :";
	cin>>n2;
	
	f1:
	cout<<endl;
	
	cout<<"Press 1 For +"<<endl;
	cout<<"Press 2 For -"<<endl;
	cout<<"Press 3 For *"<<endl;
	cout<<"Press 4 For /"<<endl;
	cout<<"Press 5 For %"<<endl;
	cout<<"Enter Your Choice :";
	cin>>choice;
	
	cout<<endl;
	
	switch(choice)
	{
		case 1:
			cout << "Addition is :"<<n1+n2;
		break;
	
		case 2:
			cout << "Subtraction is :"<<n1-n2;
		break;
	
		case 3:
			cout << "Multiplication is :"<<n1*n2;
		break;
	
		case 4:
			cout << "Division is :"<< n1/n2;
		break;
	
		case 5:
	
			cout << "Modular is :"<< n1%n2;
		break;
		
		default :
			cout <<"Your Number Is Wrong !!";
			
		goto f1;
		
		system("cls");
	}
}

