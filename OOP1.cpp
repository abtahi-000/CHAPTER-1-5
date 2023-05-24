#include<iostream>
using namespace std;

class Fruits
{
    public:
    int x1=100;
};
class Human
{
    public:
    int y1=200;
};
int main()
{
    Fruits Apple;
    Apple.x1;
    Human Body;
    Body.y1;
    cout<<Apple.x1<<endl<<Body.y1;
    return 0;
}
