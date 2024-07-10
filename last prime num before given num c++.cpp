#include<iostream>
using namespace std;

int main()
{
   int num,ctr=0;
   cout<<"Enter a number to find the last prime number occurs before the entered number :";
   cin>>num;

   for(int n=num-1;n>=1;n--)
   {
      for(int m=2;m<n;m++)
      {
         if(n%m==0)
         ctr++;
      }
      if(ctr==0)
      {
         if(n==1)
         {
            cout<<"No prime number less than 2";
            break;
         }
         cout<<n<<" is the last prime number before "<<num;
         break;
      }
      ctr=0;
   }
   return 0;
}
