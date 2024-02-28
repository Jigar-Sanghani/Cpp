#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter Array Length :";
	cin>>n;
	
	int a[n],shor[n],i;
	
	cout<<endl<<endl<<"------- Enter The Elements -------"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter The a["<<i<<"] :";
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i] > a[i+1])
		{
			a[i] = shor[i];
		}
	}
	
	cout<<endl<<endl<<"------- Reverse Elements -------"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<shor[i];
	}
}
