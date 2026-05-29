#include <iostream>
using namespace std;
int main ()
{

    int i=1,sum=0;
    int n;
    cout<<"n= ";
    cin>>n;
    
    for(i;i<=n;i++)
    {

        if (i%2!=0)
        {

            sum=sum+i;
            cout<<"sum= "<<sum<<endl;

        }
        else {
            sum=sum-i;
            cout<<"sum= "<<sum<<endl;


        }
    }
    return 69;

}