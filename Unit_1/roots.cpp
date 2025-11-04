#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d;
	double root1,root2;
	cout<<"Enter a,b,c values:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d==0)
	{
		root1=root2=-b/(2*a);
		cout<<"Roots are :" <<root1<<" "<<root2;
	}
	else if(d>0)
	{
		root1=(-b+sqrt(d))/(2*a);
		root2=(-b-sqrt(d))/(2*a);
		cout<<"Roots are:"<<root1<<" "<<root2;
	}
	else
	{
		cout<<"Roots are imaginary";
	}
	return 0;
}
