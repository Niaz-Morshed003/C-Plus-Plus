#include <iostream>
using namespace std;
int main ()
{
      int a,b,c,d,e,f,n,l,g;
    cout<<"n=";
    cin>>n;
    for(a=1;a<=n;a++)
    {
       if(a==1)
       {
        for(b=1;b<=n;b++)
        {cout<<"Z";}
        continue;
       } 
       
       if(a==n)
       { cout<<endl;
        for(b=1;b<=n;b++)
        {cout<<"Z";}
        break;
       } cout<<endl;
         for(c=1;c<=n-a;c++)
         {
            cout<<" ";
         }
         cout<<"Z";
         

    }



return 69;


}