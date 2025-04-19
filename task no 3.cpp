// Program08:Check whether a given year is a leap year.
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter any year:";
	cin>>year;
	if((year%4==0&&year%100!=0)||(year%400==0))
	{
	cout<<year<<"leap year"<<endl;	
	}
	else
	cout<<year<<"not leap year"<<endl;
	return 0;
}