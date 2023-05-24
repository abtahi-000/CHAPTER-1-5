#include<iostream>
using namespace std;

class add
{
public:
    int x,y;
    void input();
    void calculate();
};

void add :: input ()
{
    cout<<"Enter your number x and y:";
    cin>>x>>y;
    cout<<"The numbers are:" <<x<<" "<<y<<endl;

}

void add :: calculate()
{
    int result = x+y;
    cout<<"The output is:"<<result<<endl;

}

int main()
{
    add obj;
    obj.input();
    obj.calculate();

    return 0;
}
