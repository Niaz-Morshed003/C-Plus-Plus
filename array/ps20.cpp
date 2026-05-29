#include <iostream>
using namespace std;
int main ()
{
     int n,m,k=0;
     cout<<"n and m= ";
     cin>>n>>m;
     int* arr = new int [n];
     int * arr1 = new int [m];
     int * arr2 = new int[k];
    
      for ( int i=0;i<n;i++)
      {
         cout<<"arr["<<i<<"]= ";
         cin>>arr[i];


      }

      for ( int i=0;i<m;i++)
      {
         cout<<"arr1["<<i<<"]= ";
         cin>>arr1[i];


      }

          for ( int i=0;i<m;i++)
          { int y =0;
                for ( int j=0;j<n;j++)
                {
                    if(arr1[i]==arr[j])
                    { y=1;
            
                    }
                }
                if(y==0)
                {arr2[k]=arr1[i];
                k++;}


          }  cout<<"union="<<endl;

           for(int i=0;i<n;i++)
           cout<<arr[i]<<" ";
          for ( int i=0;i<k;i++)
          cout<<arr2[i]<<" ";



}