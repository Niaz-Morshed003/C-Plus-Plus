#include <iostream>
using namespace std;
int main ()
{ int n,m;
    
    cout<<"n and m= ";
    cin>>n>>m;
    int* arr1 = new int [n];
    int* tarr1 = new int [n];
    int* arr2 = new int [m];
    int* tarr2 = new int [m];
    cout<<"for arr1"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"arr1["<<i<<"]= ";
        cin>>arr1[i];
        
    }

    cout<<"for arr2"<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"arr2["<<i<<"]= ";
        cin>>arr2[i];
        
    }
       cout<<"now swappingg"<<endl;
       for (int i =0;i<m;i++)
       {
        tarr1[i]=arr2[i];
       }
       for (int i =0;i<n;i++)
       {
        tarr2[i]=arr1[i];
       }

       cout<<"now printing the final output"<<endl;
       for(int i=0;i<m;i++)
       {
        cout<<tarr1[i]<<endl;
       }
       for(int i=0;i<n;i++)
       {
        cout<<tarr2[i]<<endl;
       }


}