#include <iostream>
using namespace std;
int main ()

{   int n;
    cout<<"n= ";
    cin>>n;
int* arr = new int [n];
int * tarr = new int [n];
for(int i=0;i<n;i++)
{

    cout<<"arr["<<i<<"]";
    cin>>arr[i];
}




for (int i =0;i<n;i++)
{   for(int j = i+1;j<n;j++)
    {  if(arr[i]>arr[j])
           {int temp = arr [i];
           arr [i] = arr[j];
           arr[j]=temp;}


    }





}
      for (int i=0;i<n;i++)
{

    cout<<arr[i]<<endl;
}
  return 69;

}










