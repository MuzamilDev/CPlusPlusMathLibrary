#include<iostream>
using namespace std;
int main()
{

    int tn , n;

    cout<<"Enter a number which you want to make a table "<<endl;
    cin>>tn;

    for(n=1; n<=12; n++)

        cout<<n<<"*"<<tn<<"="<<n*tn<<endl;

    return 0;
}
