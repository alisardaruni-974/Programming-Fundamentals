#include<iostream>
using namespace std;
int main()
{
	int Balance;
	int Loyalty_Status;
	cout<<"Account Balance:";
	cin>>Balance;
	cout<<"It is a "<<((Balance<100)? "Low Balance Account" : (Balance>=100 && Balance<=500)? "Standard Account" : "Premium Account")<<endl;
	cout<<"Are you a Loyal Customer? ";
	cin>>Loyalty_Status;
	cout<<"Special Offer Eligibility:"<<((Balance>200 && Loyalty_Status==1)? "Eligible" : "Not Eligible");
	return 0;
}
