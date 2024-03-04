#include<iostream>
using namespace std;

int main()
{
	int i=10,j;
	while(i>=1)
	{
		j=i;
		while(j>=1)
		{
			if(i%2==0)
				 cout<<"@ ";
	
			else
				cout<<"% ";
			j--;
		}
			cout<<endl;
		i--;
	}
	return 0;
}
