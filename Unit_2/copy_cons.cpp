#include<iostream>
using namespace std;
class Sample
{
	private:
		int x;
	public:
		Sample()
		{
			x=45;
			cout<<"x="<<x<<endl;
		}
		Sample(Sample &s1)
		{
			x=s1.x;
			cout<<"x="<<x;
		}
};
int main()
{
	Sample s1;
	Sample s2(s1);
	return 0;
}
