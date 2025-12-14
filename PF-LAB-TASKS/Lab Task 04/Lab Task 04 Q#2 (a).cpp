#include<iostream>
using namespace std;
int main()
{
	int Required_Stock=500;
	int Current_Stock=420;
	cout<<"Is stock sufficient?"<<endl;
	cout<<(Current_Stock>=Required_Stock)<<endl;
	cout<<"Is stock less than 50% of required level?"<<endl;
	cout<<(Current_Stock<Required_Stock*0.5)<<endl;
	cout<<"Is stock exactly equal to required stock?"<<endl;
	cout<<(Current_Stock==Required_Stock)<<endl;
	cout<<"Is shortage greater than 50 units?"<<endl;
	cout<<(Required_Stock-Current_Stock>50)<<endl;
	return 0;
}
