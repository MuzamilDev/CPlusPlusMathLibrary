#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    double a , b;

    cout<<"Enter value of a: "<<endl;
    cin>>a;

    cout<<"Enter value of b: "<<endl;
    cin>>b;


    cout<<"(a+b)^2 = "<<(pow(a,2) + pow(b,2)+(2*a*b))<<endl;

    return 0;
}
