#include <iostream>
using namespace std;
class details {
protected:
    string name;
    int age;
public:
    void getdetails() {
        cout<<"Enter name and age: ";
        cin>>name>>age;
    }
    void showdetails() {
        cout<<"Name: " << name << endl;
        cout<<"Age: " << age << endl;
    }
};

class student : public details {
    string branch;
public:
    void getsd() {
        getdetails(); 
        cout<<"Enter branch: ";
        cin>>branch;
    }
void showsd() {
        cout<<"\nStudent Details:" <<endl;
        showdetails(); 
        cout<<"Branch: " << branch<<endl;
    }
};
class sabl : public details{
    int m1,m2;
public:
    void getsabl() {
        cout<<"Enter 2 sabl activity marks: ";
         cin>>m1>>m2;   
    }
void showsabl() {
        cout<<"\nSABL Details"<<endl;
        cout<<"SABL Activity marks are:";
        cout<<m1<<" "<<m2;
    }
};
int main() {
    student st;
    sabl s ;
    cout <<"Enter student information:" << endl;
    st.getsd();
    cout <<"\nEnter SABL Marks:" << endl;
    s.getsabl();
    st.showsd();
    s.showsabl();
    return 0;
}

