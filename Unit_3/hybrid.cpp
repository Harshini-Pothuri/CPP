#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		int rno;
	void getst()
	{
		cout<<"Enter name,rno:";
		cin>>name>>rno;
	}
	void showst()
	{
		cout<<"Name:"<<name<<endl;
		cout<<"Rno:"<<rno<<endl;
	}
};
class marks:public student
{
	protected:
		int m1,m2;
		void getm()
		{
			getst();
			cout<<"Enter two subject marks:";
			cin>>m1>>m2;
		}
};
class sabl{
	protected:
		int a1,a2;
		void gets()
		{
			cout<<"Enter activity1,activity2 marks:";
		    cin>>a1>>a2;			
		}
};
class percentage:public marks,public sabl
{
	public:
		float per,pers;
		void showp()
		{
			getm();
			gets();
			pers=(float)(a1+a2)/2;
			per=(float)(m1+m2)/2;
			showst();
			cout<<"Percentage:"<<per<<endl;
			cout<<"Percentage of SABL:"<<pers;
		}	
};
int main()
{
	percentage p;
    p.showp();
	return 0;	
}





