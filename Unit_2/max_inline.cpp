#include<iostream>
using namespace std;
inline max(int a,int b)
{
	return(a>b?a:b);
}
int main()
{
	int a,b;
	cout<<"Enter a,b values:";
	cin>>a>>b;
	cout<<"Maximum is :"<<max(a,b);
}
