#include<iostream>

using namespace std;

void sum(int a , int b)
{
    cout<<"The Sum is equal to "<<a+b<<endl;
}
void sum(double a , double b)
{
    cout<<"Sum is "<<a+b<<endl;
}

int main()
{
    sum(10,20);
    sum(300.5,900.9);

    return 0;
}
