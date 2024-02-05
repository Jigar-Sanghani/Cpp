#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cout<<"Enter The Row Size :";
	cin>>r;
	cout<<"Enter The Column Size :";
	cin>>c;
	
	int i,j,a[r][c],b[r][c],p[r][c];
	
	cout<<endl<<"Enter The Elements Of A"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter A["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];
		}
	}
	
	cout<<endl<<"Enter The Elements Of B"<<endl;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter B["<<i<<"]["<<j<<"] :";
			cin>>b[i][j];
		}
	}
	
	cout<<endl<<"Sum Of A & B Array"<<endl<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p[i][j] = a[i][j] + b[i][j];
			cout<<"Sum Of Elements :"<<p[i][j]<<endl;			
		}
	}
	
}
