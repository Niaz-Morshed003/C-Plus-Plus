#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{
int count=0;
    ifstream file ("Niaz er file");
    if(!file)
    {
        cout<<"error"<<endl;
        return 69;
    }


    string s;
    while (getline(file,s))
    {
        cout<<s<<endl;count++;
    } cout<<"count= "<<count;
   file.close();


}

