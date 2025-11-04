#include<iostream>
using namespace std;
class Square
{
	private:
		int a;
	public:
		Square()
		{	
		    a=20;
			cout<<"Area of square is :"<<a*a<<endl;
		}
		Square(int a)
		{	
			cout<<"Area of square is :"<<a*a<<endl;
		}
		Square(float a)
		{	
			cout<<"Area of square is :"<<a*a;
		}
};
int main()
{  
    Square s1;
	Square s2(5);
	Square s3(2.5f);
	return 0;
}







