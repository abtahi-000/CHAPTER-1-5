#include<iostream>
using namespace std;

class example
{
private:
    int x;
    int y;

public:
    example(int x,int y)
    {
        cout<<x+y<<endl;

    }

};

int main()
{
    example obj(5,10),obj1(20,20);


    return 0;
}
