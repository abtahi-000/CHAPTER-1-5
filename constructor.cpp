#include<iostream>
using namespace std;

class constructor
{
private:
    int x;
    string name="Abtahi ul alam";
public:
    constructor()
    {
        cout<<"Enter your number x:";
        cin>>x;
        cout<<"\nHere is your number:"<<x<<endl;
        cout<<"Your name is:"<<name<<endl<<endl;
    }
};

int main()
{
    constructor obj,obj1;


    return 0;
}
