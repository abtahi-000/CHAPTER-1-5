#include<iostream>
using namespace std;
void insert();
void add(int x1,int y1);
class number
{
public:

    void digit()
    {
        cout<<"Enter your numbers:\n";
        insert();
    }

};
void insert()
{
        int x,y;
        cout<<"Enter number x: ";
        cin>>x;
        cout<<"Enter number y: ";
        cin>>y;
        add(x,y);
}
void add(int x1,int y1)
{
        cout<<"The output is:"<<x1+y1;
}

int main()
{
    number add;
    add.digit();
    return 0;
}

