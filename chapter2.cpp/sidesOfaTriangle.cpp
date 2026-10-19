#include<iostream>
using namespace std;
int main(){
    int a,b,c;
   cout<<"enter first side  a : ";
    cin>>a;
    cout<<"enter second side  b : ";
    cin>>b;
    cout<<"enter third side  c : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+a)>b)
    cout<<"valid triangle";
    else
    cout<<"invalid triangle";



}




