#include<iostream>
using namespace std;
namespace one
{
	void display()
	{
		int a=353;
		cout<<a;
	}
}
namespace two
{
	void display()
	{
		string m="-CSE";
		cout<<m;
	}
}
int main()
{
	one::display()<<endl;
	two::display();
    return 0;
}
