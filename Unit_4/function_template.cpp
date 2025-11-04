#include<iostream>
using namespace std;
template<typename T>
void square(T x)
{
	cout<<"Square of "<<x<<" is "<<x*x<<endl;
}
int main()
{
	square(5);
	square(1.4);
	return 0;
}
