#include<iostream>
using namespace std;

class A
{
private:
    string name="ABTAHI UL ALAM";
    int x=10;
    friend void display(A &displayObj);
};

void display(A &displayObj)
{
    displayObj.name;
    displayObj.x;
    cout<< displayObj.name<<endl<<displayObj.x;

}

int main()
{
    A B;
    display(B);
    return 0;
}
