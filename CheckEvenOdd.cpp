// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool isEven(int a ){
    
    if(a&1){
        return 0;
    }
        return 1;
    
    
}
int main() {
    int x ;
    cout<<"Enter Number to check even .."<<endl;
    cin>>x;
 if(isEven(x)){
     cout<<"Number is even "<<endl;
 }else{
     cout<<"Number is Odd "<<endl;
 }
 
    return 0;
}