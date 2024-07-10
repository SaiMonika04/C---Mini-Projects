#include<iostream>
using namespace std;

int main()
{
   int hour,minute,second,ch;
   char slash='/',c1,c2;

       cout<<"MENU \n\n";
       cout<<"Enter your choice : \n";
       cout<<"1.Enter time \n2.Quit \n";
       cin>>ch;

       switch(ch)
       {
          case 1:

              cout<<"Enter the Time format in hh/mm/ss/c1c2 \n";
              cin>>hour>>slash>>minute>>slash>>second>>slash>>c1>>c2;
              if((hour>=0&&hour<24)&&(minute>=0&&minute<60)&&(second>=0&&second<60)&&(c1=='A'||c1=='P')&&(c2=='M')&&(slash=='/'))
              {
                  cout<<"True";
              }
              else
              {
                  cout<<"False";
              }
              break;


          case 2:
          cout<<"Quit";
          break;
       }
       return 0;
}
