
#include <iostream>
using namespace std;
int main()
{
  int a,b,c,d,n;
  cout<<"n= ";
  cin>>n;
  d=n/2;
  for(a=1;a<=n;a++)
  {

     if(a==d+1)
     {for(b=1;b<=n-2;b++)
         cout<<"H ";
    }
    else
    {  cout<<"H";
       for(c=1;c<=n;c++)
          {cout<<" ";}
          cout<<"H";



    }

    cout<<endl;
  }


return 9;
}