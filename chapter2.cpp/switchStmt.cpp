#include<iostream>
using namespace std;
int main(){
    //calculator using if else

    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2; 
    cin>>n2;
    // if(op=='+') cout<<n1+n2;
    // if(op=='-') cout<<n1-n2;
    // if(op=='*') cout<<n1*n2;
    // if(op=='/') cout<<n1/n2;
//calculator using switch statement

switch (op){
    case '+':
        cout<<n1+n2<<endl; break;
    case'-':
        cout<<n1-n2<<endl; break;
    case'*' :
        cout<<n1*n2<<endl; break;
    case'/' :
        cout<<n1/n2<<endl; break;
    default:
    cout<<"invalid operator"<<endl;

}


}