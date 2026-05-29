#include <iostream>
using namespace std;
int main ()
{
   int i,j,k,n;
  cout<<"n=";
  cin>>n;
  for(i=0;i<n;i++)
  {
     for(j=1;j<=n-i-1;j++)
     {cout<<"_";}
     for (k=0;k<(i*2)+1;k++)
     {cout<<"*";}

    cout<<endl;

  }






  return 69;



}