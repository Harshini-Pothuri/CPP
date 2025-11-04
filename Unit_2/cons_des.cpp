#include<iostream>
using namespace std;
class Sample
{
	private:
		int x;
	public:
		Sample()
		{
			cout<<"Constructor is called"<<endl;
		}
		~ Sample()
		{
			cout<<"Destructor is called"<<endl;
		}
};
int main()
{
	Sample s1,s2;
	return 0;
}
