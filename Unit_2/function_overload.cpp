#include<iostream>
using namespace std;
class sample
{
	private:
		int i;
	public:
		void show(int x)
		{
			cout<<"Integer value is :"<<x<<endl;
		}
		void show(float x)
		{
			cout<<"Floating value is :"<<x<<endl;
		}
		void show(double x)
		{
			cout<<"Double value is :"<<x<<endl;
		}
		void show(string x)
		{
			cout<<"String  is :"<<x<<endl;
		}		
};
int main()
{
	sample s;
	s.show("Hello");
	s.show(10);
	s.show(2.5f);
	s.show(2.44);
	return 0;
}








