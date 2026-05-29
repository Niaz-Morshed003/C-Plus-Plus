#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    ofstream file("Niaz er file");
    if(!file)
    {
        cout<<"error"<<endl;
        return 89;
    }
      for(int i =0;i<=10;i++)
    {file <<i<<".niaz"<<endl;
     }

     file.close();


}
