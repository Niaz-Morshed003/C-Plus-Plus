#include <iostream>
using namespace std;
int asc(int a[],int n)
{ int i,j,k,temp;
    cout<<"Setting the Array"<<endl;
    for (i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]"<<":";
        cin>>a[i];
    }

    cout<<"Now lets sort it out"<<endl;

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 1;


}
int main ()
{
    int c;
    cout<<"c= ";
    cin>>c;
    int b[c];
    asc(b,c);

    return 69;

}
