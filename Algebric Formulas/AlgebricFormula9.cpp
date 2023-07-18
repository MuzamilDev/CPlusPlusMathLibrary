#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    int a,b;

    cout<<"Enter Value of a: "<<endl;
    cin>>a;

    cout<<"Enter Value of b: "<<endl;
    cin>>b;

    cout<<" a^3 - b^3 = "<<(a-b)*(pow(a,2) + (a*b) + pow(b,2));

    return 0;
}
