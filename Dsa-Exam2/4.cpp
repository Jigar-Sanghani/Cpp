#include<iostream>
using namespace std;

int main()
{
	int r,c;
	cout<<"Enter The Row :";
	cin>>r;
	cout<<"Enter The Column :";
	cin>>c;
	
	int a[r][c],i,j;
	
	if(r!=c)
	{
		cout<<endl<<"The Row And Column Does Not Match !!"<<endl;
	}
	
	else
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<"Enter A["<<i<<"]["<<j<<"] :";
				cin>>a[i][j];
			}
		}
	
		cout<<endl<<endl<<"----- Matrix -----"<<endl<<endl;
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<a[i][j];
			}
			cout<<endl;
		}
	
		cout<<endl<<endl<<"----- Transpose Matrix -----"<<endl<<endl;
	
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				cout<<a[j][i];
			}
			cout<<endl;
		}
	}
	
	return 0;
}
