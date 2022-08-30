#include<iostream>
using namespace std;
int main()
{
  int S1,S2,S3,S4,S5,S6,S7, sum , total=750;
  float percentage;

  cout<<"Enter the numbers of all seven subjects "<<endl;
  cin>>S1>>S2>>S3>>S4>>S5>>S6>>S7;

  sum=S1+S2+S3+S4+S5+S6+S7;

  percentage=100*sum/total;

  cout<<"The percentage of student is = "<<percentage<<"%"<<endl;

  return 0;

}
