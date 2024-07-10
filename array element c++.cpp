#include<iostream>
using namespace std;

int main()
{
   int arr[25];
   int n,n1,i,flag=0;

   cout<<"Enter Array number :";
   cin>>n;

   cout<<"Enter Array elements :";

   for(i=0;i<n;i++)
   {
      cin>>arr[i];
   }

   cout<<"\nEnter the elements to search :";
   cin>>n1;

   for(i=0;i<n;i++)
   {
      if(arr[i]==n1)
      {
         flag=1;
         cout<<"Number "<< n1<<" Found at position "<< i+1 <<"\n";
         break;
      }
   }

   if(flag==0)
   {
      cout<<"Number not found in the array"<<n1;
   }
}
