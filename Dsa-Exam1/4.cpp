#include<iostream>
using namespace std;

int main()
{
	int bill,gst,total,totalbill;
	cout<<"Enter Base Amount :";
	cin>>bill;
	cout<<"Enter GST % :";
	cin>>gst;
	
	total = (bill * gst) /100;
	totalbill = total + bill;
	
	
	cout<<"Total Bill : "<<totalbill<<endl;
}

