#include<iostream>
using namespace std;
int main()
{

    float num1 , num2 , num3;

    cout<<"Enter first number "<<endl;
    cin>>num1;

    cout<<"Enter second number "<<endl;
    cin>>num2;

    cout<<"Enter third number "<<endl;
    cin>>num3;

    if((num1>num2) && (num1>num3)){
        cout<<"First number is greater "<<num1<<endl;
    }
    else if ((num2>num1) && (num2>num3)){
        cout<<"Second number is greater "<<num2<<endl;
    }
    else{
        cout<<"Third number is greater "<<num3<<endl;
    }
    return 0;
}
