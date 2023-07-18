#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter Value of a: "<<endl;
    cin>>a;

    cout<<"Enter Value of b: "<<endl;
    cin>>b;

    cout<<"Enter Value of c: "<<endl;
    cin>>c;

    cout<<" ( a + b + c )^2 = "<<(pow(a,2) + pow(b,2) + pow(c,2) + (2*a*b) + (2*b*c) + (2*a*c))<<endl;

    return 0;
}
