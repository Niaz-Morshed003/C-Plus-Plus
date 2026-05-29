#include <iostream>
using namespace std;
int isprime(int n)
{ int i;int m =1;
   for(i=2;i<=n-1;i++)
   { if(n%i==0)
    {

         m=0;
    
    }


   }

   if(m==0){cout<<"That's not a prime.";return 0;}
   else {cout<<endl<<"That is prime. "; return 1;}


}

int generator (int n)
{ int i;
 isprime(n);
 cout<<endl<<"Prime before"<<" "<<n<<endl;
 if(isprime(n))
 {  
    for(i=1;i<n;i++)
    { int m =0;
       for(int j = 2;j<i;j++)
       {
        if(i%j==0)
        {
            m=1;
        }
       } if (m==0) cout<<i<<" ";
        
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