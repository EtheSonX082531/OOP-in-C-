#include<iostream>
using namespace std;

class Student {
    //default access modifier in C++ is private
    string name;
    int age;
    int cls;

public:
    void setName() {
        string n;
        getline(cin,n,'\n');
        if(n.length()==0) {
            cout<<"Invalid name!"<<endl;
        }
        else {
            name=n;
        }
    }

    string getName() {
        return name;
    }
};



int main()
{
    Student s1;
    cout << "Enter 1st Student name:" << endl;
    s1.setName();
    cout << s1.getName() << endl;
    cout << "Size of Student object is:"<< sizeof(s1) << endl;
    Student *s2=new Student();
    //dynamic memory allocation of a object
    //(*s2).setName();
    cout << "Enter 2nd Student name:" << endl;
    s2->setName();
    cout << s2->getName() << endl;
    return 0;
}
