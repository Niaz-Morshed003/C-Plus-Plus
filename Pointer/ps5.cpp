#include <iostream>
using namespace std;
int main()
{
    int x=10,y=20;
    int *p = &x;
    int *pp = &y;
    int temp = *p;
    *p=*pp;
    *pp=temp;
    cout<<"x and y are now: "<<x<<"\t"<<y;


}
