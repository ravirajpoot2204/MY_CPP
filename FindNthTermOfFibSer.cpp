// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void find_nth_Term_Of_FibonacciSeries(){
    int n ,a=0,b=1;
    cout<<"Enter a number to get fibonacci series's nth term"<<endl;
    cin>>n;
    for(int i = 3;i<=n;i++){
        int res = a + b;
         a = b;
         b = res;
          if(i==n){
              cout<<n <<" th term of fibonacci series is : "<<res<<endl;
                  }
             }
}

int main() {
    
    find_nth_Term_Of_FibonacciSeries();
    return 0;
}