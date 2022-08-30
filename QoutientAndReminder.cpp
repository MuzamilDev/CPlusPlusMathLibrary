#include<iostream>
using namespace std;
int main()
{

    int dividend, divisor , qoutient , reminder;

    cout<<"Enter Number which to be dividend "<<endl;
    cin>>dividend;

    cout<<"Enter divisor "<<endl;
    cin>>divisor;

    qoutient = dividend/divisor;

    reminder = dividend%divisor;

    cout<<"The qoutient of number is : "<<qoutient<<endl;
    cout<<"The reminder of number is : "<<reminder<<endl;

    return 0;
}
