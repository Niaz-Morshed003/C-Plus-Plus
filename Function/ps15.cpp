#include <iostream>
using namespace std;
 void minimum (int arr[],int n)
 {  int i;

   cout<<"Setting the array.";
   for( i=0;i<n;i++)
   {
      cout<<"arr["<<i<<"]";
      cin>>arr[i];

   }

   int mini=arr[0];int minii;
   for( i=0;i<n;i++)
   {
     if(mini>arr[i])
     {mini=arr[i];
    minii=i;}

   }
   
     cout<<"minimum element: "<<mini<<" minimum index: "<<minii;
 }

 int main ()
{


int a;
cout<<"a= ";
cin>>a;
int* array = new int[a];
minimum(array,a);
return 9;


}