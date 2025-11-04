#include<iostream>
using namespace std;
class Inc
{
	private:
		int x,a;
	public:
		void operator ++()
		{
			cout<<"Enter x value:";
			cin>>x;
			++x;
			cout<<"x="<<x<<endl;
		}
};
int main()
{
	Inc i;
	++i;
	return 0;
}
