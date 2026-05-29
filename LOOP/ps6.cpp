#include <iostream>
using namespace std;
int main ()
{ int pl1,pl2,n,i=1;
    cout<<"pl,n= ";
    cin>>pl1>>n;
    for(i;i<=n;i++)
    { 
        cout<<"pl2= "<<endl;
        cin>>pl2;
        if(pl1==pl2)
        {cout<<"pl2 wins"<<endl;
            break;
        }
        else 
        cout<<"does not match and "<<n-i<<" chances are left"<<endl;




    }
    if (i>n)
    cout<<"pl1 has won"<<endl;
    cout<<"SO,THE WINNER TAKES IT ALL AND THE LOSER HAS TO FALL.";
    return 69;






}