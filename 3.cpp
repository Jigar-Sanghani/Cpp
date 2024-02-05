#include<iostream>
using namespace std;

int main()
{
	int n,i;
	
	cout<<"Enter The Number : ";
	cin>>n;
	
	cout<<"\n----------Table Of "<<n<<" ----------"<<endl;
	
	for(i=0;i<=10;i++)
	{
		cout<<n<<" * "<<i <<" = "<<(n*i)<<endl;
	}
	return 0;
	
}
