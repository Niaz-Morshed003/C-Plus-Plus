#include <iostream>
using namespace std;
int arr(int a[3][5],int b,int c)
{ int i,j,k,l,m,n,temp;
    cout<<"Setting the Matrix on fire"<<endl;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"Matrix["<<i<<"]"<<"["<<j<<"]";
            cin>>a[i][j];
        }
    }

    cout<<endl;
    cout<<"Displaying the matrix";
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";

        } cout<<endl;
    }

    cout<<endl<<"Multiplying two with each elements"<<endl;
    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]*2<<"\t";

        } cout<<endl;
    } return 1;

}


int main ()
{

    int d,e;
    cout<<"d and e= ";
    cin>>d>>e;
     int f [3][5];
     arr(f,d,e);
     return 69;



}
