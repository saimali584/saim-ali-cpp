// Program10:Simulate a basic username password check.
#include<iostream>
using namespace std;
int main()
{
	string username;
	string password;
	cout<<"Enter username:";
	cin>>username;
	cout<<"/n"<<"Enter password:";
	cin>>password;
	if(password=="3368")
	{
	cout<<"Access Granted";	
	}
	else
	{
	cout<<"Access Denied";
	}
	return 0;
}