#include<iostream>
using namespace std;

class tutorial
{   
    private:
        int x,y,sum;
    public: 
        void input()
        {
            cout<<"Enter your number:";
            cin>>x>>y;

        }
        int x(int res)
        {
            cout<<res;
        }
    friend int display(tutorial display_obj);
};

int display(tutorial display_obj)
{
    display_obj.sum = display_obj.x + display_obj.y;
    return display_obj.sum;
}

int main()
{
    tutorial obj;
    obj.input();
    int output = display(obj);
    obj.x(output);

    return 0;
}