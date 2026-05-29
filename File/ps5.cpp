#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main ()

{

    ofstream file("Niaz er file",ios::app);
    if (!file)
    {
        cout<<"error"<<endl;
        return 69;
    }

    string af;

    int n; cout<<"number of lines I wanna add: "<<endl;
    cin>>n;
    cin.ignore();
    for(int i =1;i<=n;i++)
    {
        cout<<i<<":";
        getline(cin,af);
        file<<af<<endl;
    }

    file.close();







}
