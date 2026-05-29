#include <iostream>
using namespace std;
int main ()
{
int x,rem,sum=0;
cout<<"x= ";
cin>>x;
do
{ rem=x%10;
    sum = (sum*10)+rem;
    x=x/10;

    /* code */
} while (x!=0);
cout<<"so reversed num is: "<< sum;
return 69;



}