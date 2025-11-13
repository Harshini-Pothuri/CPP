#include<iostream>
using namespace std;
void div(int x,int y)
{
	try
	{
		if(y==0)
		throw y;
		else
		cout<<x/y<<endl;
	}
	catch(int z)
	{
		cout<<"exception error"<<endl;
		throw;
	}
}
int main()
{
	try
	{
		div(10,2);
		div(20,0);
	}
	catch(int a)
	{
		cout<<"error";
	}
}
