#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //attributes
    public:
    string name;
    string dept;
    double salary;
    //methods
    void changeDept(string newDept){
        dept=newDept;
    }
};

int main(){
    Teacher t1;
    t1.name="Deep";
    t1.dept="IT";
    cout<<t1.name<<endl;
    return 0;
}