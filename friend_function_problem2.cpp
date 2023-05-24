#include<iostream>
#include<string.h>
using namespace std;

class student_id
{
private:
    int id;
    string name,dept;

public:
    int input()
    {
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"Enter your dept: ";
        getline(cin,dept);
        cout<<"Enter your id: ";
        cin>>id;
        cout<<endl<<endl;

    }

friend int output(student_id outputobj);

};

int output(student_id outputobj)
{
    outputobj.dept;
    outputobj.id;
    outputobj.name;

    cout<<"Your name is: "<<outputobj.name<<endl;
    cout<<"Your id is: "<<outputobj.id<<endl;
    cout<<"Your dept is: "<<outputobj.dept<<endl;
}

int main()
{
    student_id obj;
    obj.input();

    output(obj);

    return 0;
}
