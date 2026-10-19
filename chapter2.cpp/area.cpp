#include<iostream>
using namespace std;
int main(){
    int l , b;
    cout<<"enter length of the rectangle : ";
    cin>>l;
    cout<<"enter breadth of the rectangle : ";
    cin>>b;
    int A = l*b;//area
    int P =  2*(l+b);//perimeter
    if(A>P)
    cout<<"area is greater than its perimeter";
    else
    cout<<"area is not greater than its perimeter";


}