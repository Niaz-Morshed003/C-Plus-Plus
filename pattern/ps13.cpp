#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,d,e,f,n,l,g;
    cout<<"n=";
    cin>>n;
    for(a=1;a<=n;a++)
    { if(a==n)
        {

            for(b=1;b<=n;b++)
            cout<<b;
            for(b=n-1;b>=1;b--)
           { cout<<b;}

             break;
        }
        for(c=1;c<=a;c++)
        {cout<<c;}
        for(d=1;d<=n-a;d++)
        {cout<<" ";}
        for(e=a;e>=1;e--)
        {cout<<e;}
        cout<<endl;




    }








return 69;




}