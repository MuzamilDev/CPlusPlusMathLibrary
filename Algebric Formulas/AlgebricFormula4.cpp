#include<iostream>
#include<cmath>

using namespace std;

int main()
{

    float a,b;

    cout<<"Enter the value of a: "<<endl;
    cin>>a;

    cout<<"Enter the value of b: "<<endl;
    cin>>b;

    cout<<" a^2 + b^2 = "<<(pow((a + b),2) - (2 *a*b));

    return 0;
}
