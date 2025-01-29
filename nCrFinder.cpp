// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact = 1;
  
    if (n>0){
    while (n){
        fact = fact *n;
        n--;
    }
    return fact;}
    
    else if (n==0|n==1){
    return 1;}
     else{
    cout<<"Number can not be -ve"<<endl;
    return 0;}
}

int nCr( ){
    cout<<"Enter the value of n and r"<<endl;
    int n,r;
    cin>>n>>r;
    if(n>=r){
        int res = factorial(n)/(factorial(r)*factorial((n-r)));
        return res;
    }else{
        cout<<"r can not be greater than n"<<endl;
        return 0;
    }
   
}
int main() {
    
    
   cout<<nCr()<<endl;
    return 0;
}