#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,n,l,g;
    cout<<"n";
    cin>>n;
    l=n/2;
    g=l+1;
    
    for(int a = 0;a<g;a++)
    {
      for(b=1;b<=g-a-1;b++)
      {
        cout<<"_";
      }
       for(c=1;c<=(a*2)+1;c++)
       {

        cout<<"*";
       }

       cout<<endl;
    }


      int k = n-g;

      for(d=0;d<k;d++)
      {
        for(e=1;e<=d+1;e++)
        {
            cout<<"_";
        }
        for(f=1;f<=n-(d*2)-2;f++)
        {
            cout<<"*";
        }
             cout<<endl;
      }

        return 69;

}