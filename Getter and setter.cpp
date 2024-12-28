#include<iostream>
using namespace std;

class Student {
    //default access modifier in C++ is private
    string name;
    int age;
    int cls;
    
    public:
    void setName(string n){
    name=n;
    }
    
    string getName(){
    return name;
     }
};



int main()
{
    Student s1;
    s1.setName("Ayon Roy");
    cout << s1.getName() << endl;
    return 0;
}
