#include<iostream>
using namespace std;

int  display(int a[],int size);
int main()
{   
    int array_size;
    cout<<"Enter your array size: ";
    cin>>array_size;
    int array[array_size];
    int i;
    for(i=0; i<array_size; i++)
    {
        cin>>array[i];
    }

    display(array,array_size);

    return 0;
}
int display(int a[],int size)
{
    int i;
    cout<<"Now displaying the array's number"<<endl;
    for(i=0; i<size; i++)
    {
        cout<<a[i]<<endl;

    }


}