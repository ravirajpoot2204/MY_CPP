// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int find_Total_No_Of_Set_Bit_In_Two_No(){
    int a,b ,count =0 ;
    cout<<"Enter a number to get (3*n+7)'s nth term"<<endl;
    cin>>a>>b;
    while(a!=0){
        int bit1 = a&1;
        int bit2 = b&1;
        if(bit1){
            count++;
        } if(bit2){
            count++;
        }
    
        a=a>>1;
        b=b>>1;
    }
  
       return count;
 
}

int main() {
    
    cout<<find_Total_No_Of_Set_Bit_In_Two_No()<<endl;
    return 0;
}