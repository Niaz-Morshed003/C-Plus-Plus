#include <iostream>
using namespace std;
int print(int i,int n)
{
    if (i>n)
        return i;

   cout<<i<<" ";
   i=i+1;

    return print(i,n);

}
int main ()
{
   print(1,10);

}

