#include<iostream>
using namespace std;
class Square
{
	private:
		int x;
	public:
		Square()
		{
			cout<<"Enter x value:";
			cin>>x;
			cout<<"Area of square is :"<<x*x;
		}
};
int main()
{
	Square s;
	return 0;
}
