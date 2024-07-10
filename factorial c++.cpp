#include<iostream>
using namespace std;

int factorial(int n)
{
   if(n<=1)
      return 1;

   return n*factorial(n-1);

}

int main()
{
   int number,result;
   cout<<"Enter the non negative number to find the factorial";
   cin>>number;

   result=factorial(number);
   cout<<number<<"!="<<result;

   return 0;

}

