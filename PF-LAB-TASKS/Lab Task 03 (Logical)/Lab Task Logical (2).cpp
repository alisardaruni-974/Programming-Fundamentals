#include<iostream>
using namespace std;
int main()
{
	int Age;
	cout<<"Enter Age:";
	cin>>Age;
	cout<<"Age "<<Age<<" falls under the category:"<<((Age<13)? "Child" : (Age>=13 && Age<=19)? "Teenager" : "Adult");
	return 0;
}
