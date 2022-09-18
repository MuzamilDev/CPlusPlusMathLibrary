#include<iostream>
using namespace std;

int main()
{

    int number , reminder , reverse=0;

    cout<<"Enter An Integer "<<endl;
    cin>>number;

    while(number != 0)
    {
        reminder=number%10;
        reverse=reverse*10+reminder;
        number=number/10;
    }
    cout<<"The Reverse of Number is "<<reverse<<endl;

    return 0;
}
