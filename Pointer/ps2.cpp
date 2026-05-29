#include <iostream>
using namespace std;
int main()
{
    int x = 20 ,y = 30;
    int *p = &x ;
    int *pp = &y;
    if(*p>*pp) cout << "x ige "<<*p<<" is bigger";
    else  cout << "y ige "<<*pp<<" is bigger";


}
