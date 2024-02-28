#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter Array Length :";
	cin>>n;
	
	int a[n],i;
	
	cout<<endl<<endl<<"------- Enter The Elements -------"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter The a["<<i<<"] :";
		cin>>a[i];
	}
	
	cout<<endl<<endl<<"------- Display -------"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"a["<<i<<"] : "<<a[i]<<endl;
	}
}
