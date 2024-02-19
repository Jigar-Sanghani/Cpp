#include<iostream>
using namespace std;

int main()
{
	int n,l,i;
	
	cout<<"Enter The Number :";
	cin>>n;
	cout<<"Enter The Length :";
	cin>>l;
	
	cout<<endl;
	
	for(i=1;i<=l;i++)
	{
		cout<<n<<" * "<<i<<" = "<<n*i<<endl;
	}
	
	return 0;
}
