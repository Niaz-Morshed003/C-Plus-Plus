# include <iostream>
using namespace std;
int main ()
{  int smallest,second,third,forth,n,i;
    cout<<"n= ";
    cin>>n;
    int* arr = new int [n];
    for ( i=0; i<n;i++)
    {
          cout<<"a["<<i<<"]";
          cin>>arr[i];

    } int smallesti,secondi,thirdi,forthi;

    int temp = arr [0];

     for ( i=0; i<n;i++)
        {   if (arr[0]>arr[i])
            {
                 smallest = arr [i];
                 smallesti=i;
                 arr[0] = arr[i];
                 
            }

        
        }




 cout<<"smallest= "<<smallest<<" smallest index= "<<smallesti<<endl;

 int temp1=temp;

 for ( i=0; i<n;i++)
        {   if (temp1>arr[i]&&arr[i]>smallest)
            {
                 second = arr [i];
                 secondi=i;
                 temp1 = arr[i];
                 
            }

        
        }




 cout<<"second smallest= "<<second<<" second smallest index= "<<secondi<<endl;


int k =0;int m=0;
 int * arr1 = new int [k];

 for ( i=0; i<n;i++)
 {  if(arr[i]==smallest||arr[i]==second)
    {
         m=1;
        
    }

    if(m==0)
    {arr1[i]=arr[i];k++;}


 }




int tempp = arr1 [0];

     for ( i=0; i<k;i++)
        {   if (arr1[0]>arr1[i])
            {
                 third = arr1 [i];
                 thirdi=i;
                 arr1[0] = arr1[i];
                 
            }

        
        }




 cout<<"third smallest= "<<third<<" third smallest index= "<<thirdi<<endl;

 int temp11=tempp;

 for ( i=0; i<k;i++)
        {   if (temp11>arr1[i]&&arr1[i]>third)
            {
                 forth = arr1 [i];
                 forthi=i;
                 temp11 = arr1[i];
                 
            }

        
        }




 cout<<"Forth smallest= "<<forth<<" forth smallest index= "<<forthi<<endl;



return 69;

}
