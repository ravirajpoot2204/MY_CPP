// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool checkPrime(){
    int n ;
    cout<<"Enter a number to check if it is prime or not"<<endl;
    cin>>n;
    for(int i = 2 ;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
       return 1;
 
}

int main() {
    
    if(checkPrime()){
        cout<<"Number is prime"<<endl;
    }else{
        cout<<"Number is not prime"<<endl;
    }
   
    return 0;
}