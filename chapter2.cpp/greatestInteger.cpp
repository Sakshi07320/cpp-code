#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"enter first number : ";
    cin>>x;
    cout<<"enter second  number : ";
    cin>>y;
    cout<<"enter third  number : ";
    cin>>z;
    // if(x>y && x>z)
    // cout<<x<<" is greatest";
    // else if (y>x && y>z)
    // cout<<y<<" is greatest";
    // else
    // cout<<z<<" is greatest";
    if(x<y && x<z)
    cout<<x<< " is least";

    else if(y<x && y<z)
   cout <<y<<" is least";

   else
   cout<<z<<" is least";

}