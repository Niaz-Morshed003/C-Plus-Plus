#include <iostream>
using namespace std;
int main ()

{  int a,b,c,d,e,f,n,l,g;
    cout<<"n=";
    cin>>n;
    for(a=1;a<=n;a++)
    {
      if(a%2!=0)
      {

        for(b=1;b<=n;b++)
        {cout<<"*";}
        continue;
      }
  
      cout<<endl;
       cout<<"*";
       for(c=1;c<=n-1;c++)
       {cout<<" ";}
       cout<<"*";
       cout<<endl;

    }


   return 69;

      
}