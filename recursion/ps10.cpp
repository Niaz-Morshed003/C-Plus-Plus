#include <iostream>
using namespace std;
int add(int i,int n,int sum)
{
    if (i>n)
        return sum;


     sum = sum+i;
    return add(i+1,n,sum);

}
int main ()
{
   cout<< add(1,10,0);

}
