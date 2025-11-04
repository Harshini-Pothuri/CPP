#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==1)
	return 1;
	else
	return(n*factorial(n-1));
}
int main()
{
	int x,fact;
	cout<<"Enter x value:";
	cin>>x;
	fact=factorial(x);
	cout<<"Factorial of "<<x<<" is"<<" "<<fact;
	return 0;	
}
