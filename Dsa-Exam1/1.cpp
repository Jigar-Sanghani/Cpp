#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter Any Number :";
	cin>>n;
	
	(n==0)
	
		? cout<<"This Is A Nutural"
		
		:(n%2==0)
			? cout<<"This Is Even !!"
			: cout<<"This Is Odd !!";
		
}
