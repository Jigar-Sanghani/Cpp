#include<iostream>
using namespace std;

int main()
{
	int r,c,sum=0;
	cout<<"Enter The Row :";
	cin>>r;
	cout<<"Enter The Column :";
	cin>>c;
	
	int a[r][c],i=0,j;
	
	cout<<endl<<endl<<"----- Enter Array Elements -----"<<endl<<endl;
	
	i=0;
	while(i<r)
	{
		j=0;
		while(j<c)
		{
			cout<<"Enter A["<<i<<"]["<<j<<"] :";
			cin>>a[i][j];	
			j++;
		}
		i++;
	}
	
	cout<<endl<<endl<<"----- Matrix -----"<<endl<<endl;
	
	i=0;
	while(i<r)
	{
		j=0;
		while(j<c)
		{
			cout<<a[i][j]<<" ";
			j++;
		}
		i++;
		cout<<endl;
	}
	
	i=0;
	while(i<r)
	{
		j=0;
		while(j<c)
		{
			if(sum<a[i][j])
			{
				sum = a[i][j];
			}
			j++;
		}
		i++;
		cout<<endl;
	}
	
	cout<<"Maximum Value : "<<sum;
	return 0;
}
