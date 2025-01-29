// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int getDecimal(int n){
    int i = 0;
    int res = 0;
    
    while(n>0){
        int digit = n%10;
        if(digit == 1){
            res = res + pow(2,i);
        }i++;
        n= n/10;
    }
    return res;
}
int main() {
    cout<<"enter binary digit"<<endl;
    int n ;
    cin>>n;
    int r =getDecimal(n);
    cout<<r<<endl;
    return 0;
}