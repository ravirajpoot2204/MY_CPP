// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int find_AP_NthTerm(){
    int n ;
    cout<<"Enter a number to get (3*n+7)'s nth term"<<endl;
    cin>>n;
  int ans = (3*n+7);
       return ans;
 
}

int main() {
    
    cout<<find_AP_NthTerm()<<endl;
    return 0;
}