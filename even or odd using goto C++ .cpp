#include <iostream>
using namespace std;
int main()
{
   int num;
   cout<<"Enter a number: ";
   cin>>num;
   if (num % 2==0)
   {
      goto print;

      print:
      cout<<"Even Number";
   }
   else
   {
      cout<<"Odd Number";
   }
   return 0;
}
