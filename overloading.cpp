#include<iostream>
using namespace std;

int sum(int x,int y)
{
    cout<<x+y<<endl;
}
float sum(float x,float y)
{
    cout<<x+y<<endl;
}
int main()
{
    sum(20,30);
    sum(20.5f,30.5f);

}
