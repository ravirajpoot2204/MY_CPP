#include<bits/stdc++.h>
using namespace std;

    int bitwiseComplement(int n) {
        string binary = "";
         int res = 0;
        int i =0;
        char ch;
        if(n==0){
            res = 1;
            return res;
        }
        while(n!=0){
            int bit = n&1;
            if(bit ==1){
                ch = '0';
                binary += ch;
            }else{
                ch= '1';

                binary += ch;
            }

            n=n>>1;
            i++;
        }
       
        for(int a = binary.size()-1;a>=0;a--){
            if(binary[a]=='1'){
                int b = 1;
                res = res + pow(2,a);
               
            }
        }
        return res;
        }
  int main (){
    int n ;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int a = bitwiseComplement(n);
        cout<<a<<endl;
    return 0;
  }