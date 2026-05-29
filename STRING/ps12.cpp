#include <iostream>
using namespace std;
int main ()
{ int match,count=0,i,j;
    char str[1000],word[1000];
    cout<<"Taking string = ";
    cin.getline(str,100);
    cout<<"taking word: ";
    cin.getline(word,10);
    cout<<"the string is: "<<str<<endl<<"the word is: "<<word<<endl;
    for(int i =0; str[i]!='\0';i++)
     {

       match=1;
       for(int j=0;word[j]!='\0';j++)
       {
           if(str[i+j]!=word[j])
           {
            match=0;
            break;
           }

       }
            
          if((match==1&&(str[i+j]==' '||str[i+j]=='\0'))&&(i==0||str[i-1]==' '))
          {
            count++;
          }

     }

 cout<<endl<<"Repeated word:"<<" "<<word<<" "<<count<<"times."<<endl;
 return 9;

}