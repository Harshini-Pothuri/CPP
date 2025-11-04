#include<iostream>
using namespace std;
class Square
{
	private:
		int a;
	public:
		Square(int a)
		{	
			cout<<"Area of square is :"<<a*a;
		}
};
int main()
{  
    int x;
	cout<<"Enter side value:";
	cin>>x;
	Square s(x);
	return 0;
}
