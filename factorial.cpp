#include<iostream>
using namespace std;
int main()
{

    int n , i , f=1;

    cout<<"Enter a Number "<<endl;
    cin>>n;

    for(i=1; i<=n; i++)
        f=f*i;

    cout<<"The Factorial = "<<f<<endl;

    return 0;
}
