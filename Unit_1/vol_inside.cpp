#include<iostream>
using namespace std;
class Box
{
	private:
		int length,breadth,height;
	public:
		void get()
		{
		  cout<<"Enter length breadth height :";
		  cin>>length>>breadth>>height;
		  cout<<"Volume of Box is:"<<length *breadth *height;	
		}
};
int main()
{
	Box b;
	b.get();
}
