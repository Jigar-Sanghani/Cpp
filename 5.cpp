#include<iostream>
using namespace std;

int main()
{
	int choice;
	cout<<endl<<"----- Enter Your Choice -----"<<endl;
	cout<<endl<<"1. Dhosa";
	cout<<endl<<"2. Pizza";
	cout<<endl<<"3. Burger";
	cout<<endl<<"4. Ice-Cream"<<endl;
	cout<<endl<<"Enter Your Choice :";
	cin>>choice;
	
	system("cls");
	
	switch(choice)
	{
		case 1:
			cout<<endl<<"---- You Have Choose Dhosa ----"<<endl<<endl;
			cout<<"No.    Product     Price"<<endl<<endl;
			cout<<"01.  Mysore Dhosa  -20$"<<endl;
			cout<<"02.  Cheese Dhosa  -25$"<<endl;
			cout<<"03.  Masala Dhosa  -35$"<<endl;
			cout<<endl<<"Enter Your Choice :";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					cout<<endl<<"-----------------------------"<<endl;
					cout<<"You Have Ordered Mysore Dhosa"<<endl;
					cout<<"-----------------------------"<<endl;
				break;	
		
				case 2:
					cout<<endl<<"-----------------------------"<<endl;
					cout<<"You Have Ordered Cheese Dhosa"<<endl;
					cout<<"-----------------------------"<<endl;
				break;
	
				case 3:
					cout<<endl<<"-----------------------------"<<endl;
					cout<<"You Have Ordered Masala Dhosa"<<endl;
					cout<<"-----------------------------"<<endl;
				break;
			}
		break;	

		case 2:
			cout<<endl<<"---- You Have Choose Pizza ----"<<endl<<endl;
			cout<<"No.      Product        Price"<<endl<<endl;
			cout<<"01.  Margherita Pizza   -20$"<<endl;
			cout<<"02.  Cheese-Bust Pizza  -30$"<<endl;
			cout<<"03.  Masala Pizza       -34$"<<endl;
			cout<<endl<<"Enter Your Choice :";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					cout<<endl<<"---------------------------------"<<endl;
					cout<<"You Have Ordered Margherita Pizza"<<endl;
					cout<<"---------------------------------"<<endl;
				break;	
		
				case 2:
					cout<<endl<<"----------------------------------"<<endl;
					cout<<"You Have Ordered Cheese-Bust Pizza"<<endl;
					cout<<"----------------------------------"<<endl;
				break;
	
				case 3:
					cout<<endl<<"-----------------------------"<<endl;
					cout<<"You Have Ordered Masala Pizza"<<endl;
					cout<<"-----------------------------"<<endl;
				break;
			}
		break;
		
		case 3:
			cout<<endl<<"---- You Have Choose Burger ----"<<endl<<endl;
			cout<<"No.    Product       Price"<<endl<<endl;
			cout<<"01.  Veg Burger      -50$"<<endl;
			cout<<"02.  Chicken Burger  -21$"<<endl;
			cout<<"03.  Normal Burger   -23$"<<endl;
			cout<<endl<<"Enter Your Choice :";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					cout<<endl<<"---------------------------"<<endl;
					cout<<"You Have Ordered Veg Burger"<<endl;
					cout<<"---------------------------"<<endl;
				break;	
		
				case 2:
					cout<<endl<<"-------------------------------"<<endl;
					cout<<"You Have Ordered Chicken Burger"<<endl;
					cout<<"-------------------------------"<<endl;
				break;
	
				case 3:
					cout<<endl<<"------------------------------"<<endl;
					cout<<"You Have Ordered Normal Burger"<<endl;
					cout<<"------------------------------"<<endl;
				break;
			}
		break;
		
		case 4:
			cout<<endl<<"---- You Have Choose Ice-Cream ----"<<endl<<endl;
			cout<<"No.       Product          Price"<<endl<<endl;
			cout<<"01.  Vanilla Ice-Cream     -30$"<<endl;
			cout<<"02.  Chocalate Ice-Cream   -40$"<<endl;
			cout<<"03.  Strawberry Ice-Cream  -30$"<<endl;
			cout<<endl<<"Enter Your Choice :";
			cin>>choice;
			
			switch(choice)
			{
				case 1:
					cout<<endl<<"----------------------------------"<<endl;
					cout<<"You Have Ordered Vanilla Ice-Cream"<<endl;
					cout<<"----------------------------------"<<endl;
				break;	
		
				case 2:
					cout<<endl<<"------------------------------------"<<endl;
					cout<<"You Have Ordered Chocalate Ice-Cream"<<endl;
					cout<<"------------------------------------"<<endl;
				break;
	
				case 3:
					cout<<endl<<"-------------------------------------"<<endl;
					cout<<"You Have Ordered Strawberry Ice-Cream"<<endl;
					cout<<"-------------------------------------"<<endl;
				break;
			}
		break;
	}
}
