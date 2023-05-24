#include<iostream>
using namespace std;

class Car
{
    public:
    int x;
    int y=2000;
    void sum()
    {
        cout<<10+20;
    }

};
class HUMAN
{
    public:
    int height;


};

int main()
{
    Car BMW,Tesla;
    BMW.x;
    Tesla.x;
    cin>>BMW.x;
    cin>>Tesla.x;

    HUMAN atika;
    atika.height;
    cin>>atika.height;

    cout<<BMW.x<<endl<<Tesla.x<<endl<<atika.height<<endl;
    Tesla.sum();


    return 0;
}
