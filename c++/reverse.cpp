#include<iostream>
using namespace std;
int main(){
    int n,m,sum = 0;
    cin>>n;
    while(n!=0){
        m = n%10;
        sum = sum*10 + m;
        n = n/10;
    }
    cout<<sum;
}