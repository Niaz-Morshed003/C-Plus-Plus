# include <iostream>
using namespace std;
int main ()
{
float x,y;
cout<<"taking the value for x and y";
cin>>x>>y;
int choice;
cout<<"taking the value for choice";
cin>>choice;
switch (choice) {
case 1 : cout<<"addition: "<<x+y<<endl; break;
case 2 : cout<<"subdtraction: "<<x-y<<endl; break;
case 3 : cout<<"multi: "<<x*y<<endl; break;
case 4 : cout<<"division: "<<x/y<<endl; break;
default : cout<<"Invalid";}



return 9;


} /*pura switch statement curly brace er moddhe thakte hobe.
*/


