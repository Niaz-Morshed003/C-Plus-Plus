#include <iostream>
using namespace std;
int main ()
{int i,j,k,n,sum=0;  
    cout<<"n= ";
    cin>>n;
   int arr[n][n];
   cout<<"Setting values for the Matrix:"<<endl;
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
        cout<<"arr["<<i<<"]"<<"["<<j<<"]";
        cin>>arr[i][j];
    }
   }

   cout<<endl;
   cout<<"Displaying the Matrix:"<<endl;
    for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
    {
       
        cout<<arr[i][j];cout<<"\t";
    } cout<<endl;
   }

   for(i=0;i<n;i++)
   {
      if (i%2==0)
      {
        for(j=0;j<n;j++)
        {
           if(j%2!=0){ sum = sum+ arr[i][j];}
        }
      }

      else 
      {

       for(j=0;j<n;j++)
       {
        sum=sum+arr[i][j];
       }

      }


   }


   cout<<endl<<"sum= "<<sum;
return 69;

}