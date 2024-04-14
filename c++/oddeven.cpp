#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    if(n%2==0)
        cout<<"even number\n";
    else
        cout<<"odd number\n";
   //ternary operator
   (n%2==0) ? cout<<"even\n" : cout<<"odd\n " ;
}