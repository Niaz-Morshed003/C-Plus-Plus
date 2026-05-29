#include <iostream>
using namespace std;
int main ()
{
     int n;
     cout<<"n= ";
     cin>>n;
     int* arr = new int [n];
     int * arr1 = new int [n];
     int k=0;
      for ( int i=0;i<n;i++)
      {
         cout<<"arr["<<i<<"]= ";
         cin>>arr[i];


      }

          for ( int i=0;i<n;i++)
          { int m =0;
                for ( int j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    { m=1;
            
                    }
                }
                if(m==0)
                {arr1[k]=arr[i];
                k++;}


          }

          for ( int i=0;i<k;i++)
          cout<<arr1[i]<<" ";



}