#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    float a,b;

    cout<<"Enter Value of a: "<<endl;
    cin>>a;

    cout<<"Enter Value of b: "<<endl;
    cin>>b;

    cout<<"The (a-b)^2 = "<<(pow(a,2) + pow(b,2) - (2*a*b))<<endl;

    return 0;

}
