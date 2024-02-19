#include<iostream>
using namespace std;

int main()
{
	int n1,n2,n3;
	
	cout<<"Enter The First Number :";
	cin>>n1;
	cout<<"Enter The Second Number :";
	cin>>n2;
	cout<<"Enter The Third Number :";
	cin>>n3;
	
	if(n1<n2)
	{
		if(n1<n3)
		{
			cout<<"The Minimum Number Is :"<<n1;
		}
		else
		{
			cout<<"The Minimum Number Is :"<<n3;
		}
	}
	
	else
	{
		if(n2<n3)
		{
			cout<<"The Minimum Number Is :"<<n2;
		}
		else
		{
			cout<<"The Minimum Number Is :"<<n3;
		}
	}
}
