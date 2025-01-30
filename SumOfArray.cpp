
#include <bits/stdc++.h>
using namespace std;

int sum(int  arr[] , int n){
    
    cout<<"Inside Sum "<<endl;
       int sum =0;
   for(int i = 0 ; i<n;i++){
       sum +=arr[i];
   }
    
    
    
    cout<<"Going back to main"<<endl;
return sum;    
}
int main() {
    int size ;
    cout<<"enter the size of the array <= 100"<<endl;
    cin>>size;
   int arr [100] ;
   for(int i = 0 ; i < size ; i++){
       cin>>arr[i];
   }
   
       cout<<"The sum of number is : "<<sum(arr,size)<<endl;

    return 0;
}