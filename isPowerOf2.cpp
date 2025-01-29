   
   #include<bits/stdc++.h>
   using namespace std;
   //brutforce
    bool isPowerOfTwo1(int n) {
        for(int i = 0 ;i<31 ;i++){
            int ans  = pow(2,i);
            if(ans == n) {
                return true;
            }
        }
        return false;
    }
    bool isPowerOfTwo2(int n) {
        int ans = 1;
        for(int i = 0 ;i<31 ;i++){
          
            if(ans == n) {
                return true;
            }
            if(ans < INT_MAX/2){
            ans = ans *2;
            }
        }
        return false;
    }
    int main (){
        int n  ;
        cout<<"Enter a number to check whether a number is power of  2 or not.."<<endl;
        cin>>n;
        bool flag = isPowerOfTwo2(n);
        cout<<flag<<endl;
        return 0;
    }