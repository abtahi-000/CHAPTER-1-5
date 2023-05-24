#include<iostream>
using namespace std;

class example
{
private:
    int x,y;
    string name;

public:
    example()
    {
        cout<<"\n";
    }
    example(int x1)
    {
        cout<<"Enter your number\n";
        x=x1;
    }
    void display()
    {
        cout<<"The value of x is:"<<x;
    }

};

int main()
{
    example obj;
    example obj1(15);
    obj1.display();

    return 0;
}
