#include <bits/stdc++.h>
using namespace std;
int getMax(int num[],int n){
    int maxi =INT_MIN;
    for(int i = 0 ; i < n ; i ++ ){
      
      maxi = max(maxi,num[i]);
       // if(num[i]>max){
        //    max = num[i];
       // }
    }
    return maxi ;
}
int getMin(int num[],int n){
    int mini = INT_MAX;
    for(int i  = 0 ; i < n ; i++){

        mini = min(mini,num[i]);       
        //if(min>num[i]){
         //   min = num[i];
       // }
    }
    return mini;
}

int main() {
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
   int arr [100];
   for(int i = 0 ; i<size;i++){
       cin>>arr[i];
   }
   cout<<"Max Value of array is : "<<(getMax(arr,size))<<endl;
   
   
   cout<<"Min Value of array is : "<<(getMin(arr,size))<<endl;

    return 0;
}