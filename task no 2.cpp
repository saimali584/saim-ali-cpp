// program07:Assign a grade based on marks.
#include<iostream>
using namespace std;
int main()
{
	float marks;
	cout<<"Enter the marks between(0 to 100):";
	cin>>marks;
	if(marks<=100&&marks>=90)
	{
		cout<<"Your grade is:A";
	}
	else if(marks<=89&&marks>=80)
	{
	cout<<"Your grade is:B";
	}
	else if(marks<=79&&marks>=70)
	{
	cout<<"Your grade is:c";	
	}
	else
	{
	cout<<"your grade is:D";	
	}
	return 0;
}