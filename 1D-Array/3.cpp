#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Enter Array Length :";
	cin>>n;
	
	int a[n],i,max=0;
	
	cout<<endl<<endl<<"------- Enter The Elements -------"<<endl<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Enter The a["<<i<<"] :";
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	
	cout<<endl<<endl<<"Maximum Of Array : "<<max;
}
