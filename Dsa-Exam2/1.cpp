#include<iostream>
using namespace std;

int main()
{
	int n,i,rem=0,sum=0;
	
	cout<<"Enter Any Number : ";
	cin>>n;
	
	i==n;
	
	for(;n>0;n/=10)
	{
		rem = n%10;
		sum+=rem;
	}
	
	cout<<"Sum Is : "<<sum<<endl;																									
																											
	return 0;
}
