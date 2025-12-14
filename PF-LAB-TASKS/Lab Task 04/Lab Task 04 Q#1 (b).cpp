#include<iostream>
using namespace std;
int main()
{
	int Train_Ticket_Price=1200;
	int Discount;
	int Service_Charges;
	cout<<"Train Ticket Price:"<<Train_Ticket_Price<<endl;
	Discount=Train_Ticket_Price*0.25;
	cout<<"Discount:"<<Discount<<endl;
	Train_Ticket_Price-=Discount;
	Service_Charges=Train_Ticket_Price*0.08;
	cout<<"Service Charges:"<<Service_Charges<<endl;
	Train_Ticket_Price+=Service_Charges;
	int Online_Booking_Fee=50;
	cout<<"Online Booking Fee:"<<Online_Booking_Fee<<endl;
	Train_Ticket_Price+=Online_Booking_Fee;
	cout<<"Train Ticket Final Price:"<<Train_Ticket_Price<<endl;
	return 0;	
}
