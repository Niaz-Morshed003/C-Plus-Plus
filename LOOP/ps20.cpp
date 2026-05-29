#include <iostream>
using namespace std;
int main ()
{


   int i=1,sum=0,s2=0,n;
   cout<<"n= ";
   cin>>n;
   for(i;i<=n;i++)
   {
     sum=(sum*10)+i;
     s2=s2+sum;
    


   }
   cout<<"result= "<<sum<<","<<s2;
   return 99;





}