#include<iostream>
using namespace std;
int main()
{
	int Burger_Quantity;
	int Burger_Price;
	int Drink_Quantity;
	int Drink_Price;
	int Fries_Quantity;
	int Fries_Price;
	int Total_Bill;
	int Sales_Tax;
	int Final_Amount;
	int Average_Cost;
	cout<<"Burger Quantity:";
	cin>>Burger_Quantity;
	cout<<"Burger Price:\t";
	cin>>Burger_Price;
	cout<<"Drink Quantity:\t";
	cin>>Drink_Quantity;
	cout<<"Drink Price:\t";
	cin>>Drink_Price;
	cout<<"Fries Quantity:\t";
	cin>>Fries_Quantity;
	cout<<"Fries Price:\t";
	cin>>Fries_Price;
	Total_Bill=Burger_Quantity*Burger_Price+Drink_Quantity*Drink_Price+Fries_Quantity*Fries_Price;
	cout<<"Total Bill:\t"<<Total_Bill<<endl;
	Sales_Tax=Total_Bill*0.07;
	cout<<"Sales Tax:\t"<<Sales_Tax<<endl;
	Final_Amount=Total_Bill+Sales_Tax;
	cout<<"Final Amount after adding tax:\t"<<Final_Amount<<endl;
	Average_Cost=Final_Amount/4;
	cout<<"Average Cost per item:\t"<<Average_Cost;
	return 0;
}
