#include<iostream>
using namespace std;
int a=100;
int main()
{
	int a=10;
	cout<<"Local variable is "<<a<<' ';
	cout<<"Global variable is "<<::a;;
    return 0;
}
