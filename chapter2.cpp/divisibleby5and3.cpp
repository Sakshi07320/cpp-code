#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter integer : ";
    cin>>n;
    if(n%5==0  &&  n%3==0)//using OR logical operator we also solve it condition : ||
    cout<<"divisible";
    else
    cout<<"not divisible";
}