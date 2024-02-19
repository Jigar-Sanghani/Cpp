#include<iostream>
using namespace std;

int main()
{
	char c1,c2,c3;
	
	cout<<"-----Enter Capital Character-----"<<endl<<endl;
	cout<<"Enter Any First Character : ";
	cin>>c1;
	cout<<"Enter Any Second Character : ";
	cin>>c2;
		
	cout<<endl<<endl;	
	
	if(c1 < 'M' && c2 < 'M')
	{
		c3 = c1;
		c1 = c2;
		c2 = c3;
		
		cout<<endl;
		 
		cout<<"First Swap : "<<c1<<endl;
		cout<<"Second Swap : "<<c2<<endl;
	}
	else
	{
		cout<<"Enter a character less than 'M' ";
	}
}

