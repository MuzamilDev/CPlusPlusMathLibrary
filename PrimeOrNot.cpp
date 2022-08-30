#include<iostream>
using namespace std;
int main()
{

    int n,i;

    cout<<"Enter a number to check whether it is prime or not "<<endl;
    cin>>n;

    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
            break;
    }
    if(n==i)
    {
        cout<<"Number is Prime "<<endl;
    }
    else
    {
        cout<<"Number is Not Prime "<<endl;
    }

}
