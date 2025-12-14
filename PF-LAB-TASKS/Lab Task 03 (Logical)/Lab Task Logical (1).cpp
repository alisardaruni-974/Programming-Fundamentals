#include<iostream>
using namespace std;
int main()
{
	int First_Number;
	int Second_Number;
	cout<<"Enter First Number:";
	cin>>First_Number;
	cout<<"Enter Second Number:";
	cin>>Second_Number;
	cout<<((First_Number%2==0)? "The First Number is Even" : "The First Number is Odd")<<endl;
	cout<<((Second_Number%2==0)? "The Second Number is Even" : "The Second Number is Odd");
	return 0;
}
