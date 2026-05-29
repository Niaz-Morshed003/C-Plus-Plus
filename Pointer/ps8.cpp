

#include <iostream>
using namespace std;
int main()
{ int n;
    cin>>n;
    int arr [n];
    int *x = &arr[n-1];
    for(int i =0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<": "<<endl;
        cin >>arr[i];
    }
     for(int i =n-1;i>=0;i--)
     {
         cout<<*x<<" ";*x--;
     }




}
