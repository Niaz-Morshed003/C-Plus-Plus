#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()
{

    ifstream file ("Niaz er file");
    if(!file)
    {
        cout<<"error"<<endl;
        return 69;
    }


    string s;
    while (getline(file,s))
    {
        cout<<s<<endl;
    }
   file.close();

}
