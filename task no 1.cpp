// programno6:Find the largest among three numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the first number:";
	cin>>a;
	cout<<"Enter the second number:";
	cin>>b;
	cout<<"Enter the third number:";
	cin>>c;
	if(a>=b&&a>=c)
	{
	cout<<"a is max number:"<<a;
	}
	else if(a<=b&&b>=c)
{	cout<<"b is max number:"<<b;
}
else
{
	cout<<"c is max number:"<<c;
}
return 0;
}
		