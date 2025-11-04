#include<iostream>
using namespace std;
class unary
{
	int x,y;
	public:
		void get()
		{
			x=10;
			y=-20;
		}
		void operator -()
		{
			x=-x;
			y=-y;
			cout<<"x="<<x<<endl;
			cout<<"y="<<y;
		}
};
int main()
{
	unary u;
	u.get();
	-u; //u.operator -();
	return 0;
}
