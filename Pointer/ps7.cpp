
#include <iostream>
using namespace std;
int main()
{ int n;int sum =0;
    cin>>n;
    int arr [n];
    int *x = &arr[0];
    for(int i =0;i<n;i++)
    {
        cout<<"arr["<<i<<"]"<<": "<<endl;
        cin >>arr[i];
    }
     for(int i =0;i<n;i++)
     {   sum = sum+*x;
        *x++;
     } cout<<"sum= "<<sum;





}
