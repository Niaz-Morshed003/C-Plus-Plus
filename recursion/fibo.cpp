#include <iostream>
using namespace std;
int fibo (int n)
{
    if(n==0)
        return 0;
    else if (n==1) return 1;
   else return fibo(n-1)+fibo(n-1-1);
}
int main ()
{

    int num;
    cout<<"num= ";
    cin>>num;
    for(int i =0;i<num;i++)
    {
        cout<<fibo(i)<<" ";
    }
}
