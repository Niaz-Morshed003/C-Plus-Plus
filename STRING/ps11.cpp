#include <iostream>
using namespace std;
int main ()

{ int n;int sum=0;
    cout<<"n= ";
    cin>>n;
    cin.ignore();
    char arr[n];
    cout<<"string: ";
    cin.getline(arr,n);
    cout<<"String is: "<<arr<<endl;
    for (int i=0;arr[i]!='\0';i++)
    {
         if(arr[i]>=48&&57>=arr[i])
         {
              sum = sum+arr[i];
              sum=sum-48;
         }


    }


cout<<endl<<"sum= "<<sum;





}