#include <iostream>
using namespace std;
int main ()
{
   int n;
   cout<<"n= ";
   cin>>n;
   int* arr = new int [n];
   for (int i=0;i<n;i++)
   {
      cout<<"arr["<<i<<"]"<<endl;
      cin>>arr[i];


   }

   int* newarr = new int [n+1];
   int posi,num;
   cout<<"position and num= "<<endl;
   cin>>posi>>num;

   for (int i=0;i<posi;i++)
   {
    newarr[i]=arr[i];
   }

   newarr[posi]=num;//amra ei array er bhitor je kono variable rakhte pari

   for(int i = posi;i<n;i++)
   {
    newarr[i+1]=arr[i];
   }
   cout<<"updated array:"<<endl;
   for(int i=0;i<n+1;i++)
   {
    cout<<newarr[i]<<endl;
   }




return 69;




}