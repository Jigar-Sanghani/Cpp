#include<iostream>
using namespace std;

int main()
{
	int size;
	
	cout<<"Enter The Size : ";
	cin>>size;
	
	int a[size][size],i,j,cube[size][size];
	
	cout<<endl<<"Enter The Elements :"<<endl;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"Enter The A["<<i<<"]["<<j<<"] : ";
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cube[i][j] = a[i][j] * a[i][j];
		}
	}
	
	cout<<endl<<endl<<"Cube : "<<endl<<endl;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<" "<<cube[i][j]<<" ";
		}
	}
	
	return 0;
}
