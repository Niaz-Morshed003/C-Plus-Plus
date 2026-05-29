#include <iostream>
using namespace std;
int isprime(int n)
{ int i;int m =1;
   for(i=1;i<=n;i++)
   { if(i==1||i==n)
    {

        if(n%i==0) m=0;
    
    }


   }

   if(m==0){cout<<"That's a prime.";return 1;}
   else return 69;


}

int generator (int n)
{ int i;
 isprime(n);
 cout<<endl<<"Prime before"<<" "<<n<<endl;
 if(isprime(n)==1)
 {
    for(i=1;i<n;i++)
    {

        if(i%i==0&&i%1==0)
        {
            cout<<i<<" ";
        }
    }

 }
 else cout<<endl<<"Not prime";
 return 3;
 




}


int main ()
{



    int n;
    cout<<"n= ";
    cin>>n;
    generator(n); return 79;
}