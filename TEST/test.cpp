#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"taking the values for a,b,and c= ";
    cin>>a>>b>>c;
    if(a>b&a>c) cout<<"a is the biggest"<<endl;

    else if(b>a&b>c) cout<<"b is the biggest"<<endl;
    else if(c>b&c>a) cout<<"c is the biggest"<<endl;


}