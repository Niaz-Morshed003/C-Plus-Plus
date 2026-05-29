#include <iostream>
using namespace std;
int main ()
{int i,j,k,n,m,sum=0;  
    cout<<"n= ";
    cin>>n;
    cout<<"m= ";
    cin>>m;
   int arr[n][m];
   cout<<"Setting values for the Matrix:"<<endl;
   for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
        cout<<"arr["<<i<<"]"<<"["<<j<<"]";
        cin>>arr[i][j];
    }
   }

   cout<<endl;
   cout<<"Displaying the Matrix:"<<endl;
    for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
       
        cout<<arr[i][j];cout<<"\t";
    } cout<<endl;
   } cout<<endl;

for(i=0;i<n;i++)
   {
    for(j=0;j<m;j++)
    {
        cout<<arr[i][m-1-j]<<"\t";
    } cout<<endl;

   } 
}