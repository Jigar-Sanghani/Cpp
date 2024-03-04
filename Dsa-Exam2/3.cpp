#include<iostream>
using namespace std;

int main()
{
	int start,end,i=0,sum=0,size=0;
	int a[100];
	
	cout<<"Enter The Start Number :";
	cin>>start;
	cout<<endl<<"Enter The End Number :";
	cin>>end;
	
	cout<<endl<<endl<<"Array Is : ";
	
	for(i=start;i<=end;i++)
	{	
		if(i%2==1)
		{
			cout<<i<<" ";
			sum+=i;
			size++;
		}
	}
	
	cout<<endl<<endl<<"Avarage : "<< (sum/size);
	
	return 0;
}
