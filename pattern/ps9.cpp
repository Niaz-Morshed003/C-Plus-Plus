#include <iostream>
using namespace std;
int main ()
{
   int i,j,k,n;
  cout<<"n=";
  cin>>n;
  for(i=1;i<=n;i++)
  {
     if(i%2!=0)
     {
       for(j=1;j<=n;j++)
       {
         if (j%2!=0)
         cout<<1;
         else 
         cout<<0;

       }

     }
        else
     {
       for(j=1;j<=n;j++)
       {
         if (j%2!=0)
         cout<<0;
         else 
         cout<<1;

       }
        
     }
      cout<<endl;
     
  }    return 69;    }












