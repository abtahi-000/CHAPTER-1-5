#include<iostream>
using namespace std;

class product
{
    private:
        int sum=0,price[5];

    public:
        void show()
        {
            cout<<"Enter your product price:";
            for(int i=0; i<5; i++)
            {
                cin>>price[i];
            }
        }
        friend int display(product displayobj);
};

int display(product displayobj)
{
    for(int i=0; i<5; i++)
    {
        displayobj.sum+=displayobj.price[i];
    }
    cout<<"The price is:"<<displayobj.sum<<endl;

}

int main()
{
    product obj;
    obj.show();
    display(obj);

    return 0;
}
