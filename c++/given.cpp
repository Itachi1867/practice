#include<iostream>
using namespace std;
int main(){
    int n,m = 0,count = 0;
    cin>>n;
    if(n<100){
    m = n % 10;
    n = n/10;
    count = 2;
    cout<<n<<endl<<m;
    cout<<count;    
    }
    if(n<1000){
        int o;
        m = n%100;
        o = m/10;
        m = m%10;
        n = n/100;
        count = 3;
        cout<<n<<endl<<o<<endl<<m<<endl;
    }


}