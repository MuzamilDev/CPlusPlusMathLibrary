#include<iostream>
using namespace std;
int main()
{

    int x ,y;

    cout<<"Enter Any Number "<<endl;
    cin>>x;

    y=x%2;

    if (y==0)
        cout<<"The Number is EVEN "<<endl;
    else
        cout<<"The Number is ODD "<<endl;

    return 0;
}
