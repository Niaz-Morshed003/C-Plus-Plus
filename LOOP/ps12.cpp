#include<iostream>
using namespace std;
int main ()
{    int n;
      cout<<"n= ";
      cin>>n;
      int a = 0;int b=1;
      cout<<a<<" "<<b<<" ";
      for(int i =2;i<=n;i++)
      {
          int next = a+b;
          a=b;
          b=next;
          cout<<next<<" ";
      }

}
