// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int power(int a , int b ){
    int powr = 1;
    for(int i = 1 ; i<=b;i++){
        powr =powr*a;
        if(powr>INT_MAX/a||powr<INT_MIN/a){
            cout<<"This Input can not be stored in Integer"<<endl;
            powr=0;
            return powr;
        }
    }
    return powr;
}
int main() {
    int x ,y;
    cout<<"Enter two digit"<<endl;
    cin>>x>>y;
 cout<<x <<"^"<<y <<" = "<<power(x,y)<<endl;
    return 0;
}