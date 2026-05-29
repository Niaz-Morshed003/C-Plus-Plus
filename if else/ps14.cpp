#include <iostream>
using namespace std;
int main ()
{
    float x,y;
    int choice;
    cout<<"taking x and y=";
    cin>>x>>y;
    cout<<"taking y = ";
    cin>>choice;
    if(choice==1)
    {
        cout<<"addition="<<x+y<<endl;
    }
   else if(choice==2)
    {
        cout<<"substraction="<<x-y<<endl;
    }
    else if(choice==3)
    {
        cout<<"multi="<<x*y<<endl;
    }
    else if (choice==4)
    {
        if(y!=0)
        {
            int choice2;
            cout<<"taking choices: ";
            cin>>choice2;
            if(choice2==1) cout<<"quotient= "<<x/y<<endl;
            else 
            {
                int a=int(x);
                int b = int(y);
                cout<<"reminder :"<<a%b<<endl;
            }
        }
        else cout<<"invalid since y is 0"<<endl;
    }

    else cout<<"invalid pressing";
    return 0;
}