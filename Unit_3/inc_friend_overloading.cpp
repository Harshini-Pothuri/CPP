#include<iostream>
using namespace std;
class Inc
{
	private:
		int x,a;
		
		friend void operator ++(Inc &i);
};
		
		void operator ++(Inc &i)
		{
			cout<<"Enter x value:";
			cin>>i.x;
			++i.x;
			cout<<"x="<<i.x<<endl;
		}

int main()
{
	Inc i;
	++i;
	return 0;
}
