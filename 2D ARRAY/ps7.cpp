#include <iostream>
using namespace std;
int main ()
{
int i,j,k,n;
cout<<"n is ";
cin>>n;
int a[n][n],b[n][n],c[n][n];
cout<<"Taking values for a matrix"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
   { cout<<"a["<<i<<"]"<<"["<<j<<"]"; 
    cin>>a[i][j];}
}
cout<<"Taking values for b matrix"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {cout<<"b["<<i<<"]"<<"["<<j<<"]"; 
    cin>>b[i][j];}
}

cout<<"Displaying a matrix"<<endl;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    cout<<a[i][j]<<"\t";
    cout<<endl;
}

cout<<"Displaying b matrix"<<endl;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    cout<<b[i][j]<<"\t";
    cout<<endl;
}

for(i=0;i<n;i++)
{ 
    for(j=0;j<n;j++)
    {  c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }

}

cout<<"Multiplied Matrix:"<<endl;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
{
    cout<<c[i][j]<<"\t";
    

}
cout<<endl;
}

return 9;}