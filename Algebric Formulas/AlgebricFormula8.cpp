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

    cout<<"(a - b)^3 = "<<(pow(a,3)- (3*pow(a,2)*b) + 3*a*pow(b,2) - pow(b,3));

    return 0;
}
