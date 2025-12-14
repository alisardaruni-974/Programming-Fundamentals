#include<iostream>
using namespace std;
int main()
{
	int Classes_Attended=48;
	int Total_Classes=60;
	cout<<"Was the requirement met?"<<endl;
	cout<<((Classes_Attended*100/Total_Classes)>=75)<<endl;
	cout<<"Did he attend more than 50 classes?"<<endl;
	cout<<(Classes_Attended>50)<<endl;
	cout<<"Did he attend less than 60% of total classes?"<<endl;
	cout<<((Classes_Attended*100/Total_Classes)<60)<<endl;
	return 0;
}
