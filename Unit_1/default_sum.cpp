#include<iostream>
using namespace std;
class sum
{
	private:
		int a,b;
	public:
		void add(int a=10,int b=50)
        {
	        cout<<"Sum is:"<<a+b<<endl;
        }
};
int main()
{
	sum s;
	s.add(30,20);
	return 0;
}
