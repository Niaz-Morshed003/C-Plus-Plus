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



for (i=1;i<n-1;i++)
{

    
    sum=sum+arr[i][i];
}
for (i=0;i<n;i++)
{

    
    sum=sum+arr[0][i];
}
for (i=0;i<n;i++)
{

    
    sum=sum+arr[n-1][i];
}

for (i=1;i<n-1;i++)
{

    sum = sum + arr[i][n-1-i];
}

sum=sum-arr[n/2][n/2];

cout<<endl<<"Sum= "<<sum;
return 69;




}