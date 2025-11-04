#include<iostream>
using namespace std;
class unary{
	int x,y;
	public:
		void get()
		{
			x=10;
			y=-20;
		}
		friend void operator -(unary &u);
};
		void operator -(unary &u)
		{
			u.x=-u.x;
			u.y=-u.y;
			cout<<"x="<<u.x<<endl;
			cout<<"y="<<u.y;
		}
int main()
{
	unary u;
	u.get();
	-u; //operator -(u);
	return 0;
}
