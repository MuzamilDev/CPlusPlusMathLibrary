#include<iostream>
using namespace std;

int main()

{
   int number1 , number2 , shift;

   cout<<"Enter first number: "<<endl;
   cin>>number1;
   cout<<"Enter second number: "<<endl;
   cin>>number2;

   if(number1>number2)
   {
       shift=number1;
   }
   else
   {
       shift=number2;
   }
   cout<<endl;

   while(true)
   {

       if(shift%number1 == 0 && shift%number2 ==0)
       {
           cout<<number1<<" and "<<number2<<" LCM is "<<shift;
           break;
       }
       else
       {
           shift+=1;
       }
   }

   return 0;
}
