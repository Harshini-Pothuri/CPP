#include<iostream>
using namespace std;
class Demo
{
	private:
		int x;
	friend void sum(Demo &d);
};
void sum(Demo &d)
{
	int y;
	cout<<"Enter x,y values:";
	cin>>d.x>>y;
	cout<<"Addition is:"<<d.x+y;
}
int main()
{
	Demo d;
	sum(d);
	return 0;
}

