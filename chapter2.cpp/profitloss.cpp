#include<iostream>
using namespace std ;
int main (){
    int CP , SP ;
    cout<<"cost price of an item : ";
    cin>>CP;
    cout<<"selling price of an item : ";
    cin>>SP;
    if(SP>CP){
    cout<<"profit"<<endl<<"Rs.";
    cout<<SP - CP;
}
     else if(CP>SP){

    cout<<"loss"<<endl<<"Rs.";
    cout<<CP - SP ;
 }
 else{
    cout<<"no profit no loss";
 }
}

