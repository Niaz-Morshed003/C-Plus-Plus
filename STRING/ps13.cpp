#include <iostream>
using namespace std;
int main()
{
    char str[1000];
    cout<<"taking the string: ";
    cin.getline (str,1000);
    for(int i=0;str[i]!='\0';i++)
    { int dup=0;
         for(int j=0;str[j]!='\0';j++)
         {
            if(i!=j&&str[i]==str[j])
            { dup=1;break; 
            }
          
         }
         if(dup==0)
         cout<<str[i];

    }







}