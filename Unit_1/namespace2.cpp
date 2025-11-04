#include<iostream>
using namespace std;
int a=100;
namespace one
{
	string display()
	{
		string m="CSE";
		return m;
	}
}
namespace two
{
	int display()
	{
		int a=5;
		return a;
	}
}
int main()
{
	int a=50;
	cout<<one::display()<<" ";
	cout<<two::display()<<endl;
	cout<<"Global variable is:"<<::a<<endl;
    cout<<"Local variable is:"<<a;

    return 0;
}
