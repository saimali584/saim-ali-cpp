// Programn09:Identify the type of input character.
#include<iostream>
using namespace std;
int main()
{
	char typ;
	cout<<"Enter a single character:";
	cin>>typ;
	if(typ>='0'&&typ<='9')
	{
	cout<<"A digit character:";	
	}
	else if(typ>='A'&&typ<='Z')
	{
	cout<<"A uppercase character:";	
	}
	else if(typ>='a'&&typ<='z') 
	{
	cout<<"A lowercase character:";
    }
    else 
    {
    cout<<"A special character";	
	}
	return 0;
}
