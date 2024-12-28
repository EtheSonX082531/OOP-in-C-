#include<iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    int cls;
};



int main()
{
    Student s1;
    s1.name="Anik Roy";
    s1.age=24;
    s1.cls=12;
    
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.cls << endl;
    return 0;
}
