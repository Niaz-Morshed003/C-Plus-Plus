#include <iostream>
using namespace std;
int main ()

{ int a,b,c,d,e,f,g,n;
    cout<<"n= ";
    cin>>n;
    g=n/2;
    for(a=1;a<=g;a++)
    {
       if(a==1)
       {
        cout<<"*";
        for(b=1;b<=g;b++)
        {cout<<" ";}
        cout<<"*"<<endl;
       }

        if(a==g)
        {
            for(c=1;c<=g-1;c++)
            {cout<<" ";}
            cout<<"*";
            for(d=1;d<=g-1;d++)
            {cout<<" ";}
            break;
        }

         for(e=1;e<a+1;e++)
         {cout<<" ";}
         cout<<"*";
         for(f=1;f<(g-a)+1;f++)
         {cout<<" ";}
         cout<<"*";
         cout<<endl;




    }
         cout<<endl;
    int x,y,z,j,k,l;
    for(x=1;x<=g;x++)
    {
       for(y=x;y<g;y++)
       {cout<<" ";}
       cout<<"*";
       for(z=1;z<=x+x;z++)
       {cout<<" ";}
       cout<<"*";
       cout<<endl;


    }





return 69;


}