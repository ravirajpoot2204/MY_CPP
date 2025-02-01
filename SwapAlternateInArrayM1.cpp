// Online C++ compiler to run C++ program online

#include <bits/stdc++.h>
using namespace std;
void printArray( int arr[],int size){
        cout<<"Alternative Swapped Array"<<endl;
 for(int i = 0 ; i<size;i++){
            cout<<"|"<<arr[i]<<"| ";
           
       }cout<<endl;
    
    cout<<"Going back to main"<<endl;

}

void swapAlternativeArray(int  arr[] , int size){
    int start =0;
    int end = 1;
  

while(start<size &&end<size){
  /*  int nume = arr[end];
    int nums = arr[start];
    arr[end]=nums;
    arr[start]=nume;*/
    swap(arr[start],arr[end]);
    start =start + 2;
    end = end + 2;
} 
}

int main() {

   int arr [6]={25,0 ,5 ,2 ,-6 ,1} ;
     int brr [5]={1,2 ,3 ,-6 ,8} ;
    
    printArray(arr,6);
    swapAlternativeArray(arr,6);
    printArray(arr,6);
    
    printArray(brr,5);
    swapAlternativeArray(brr,5);
    printArray(brr,5);

   
    return 0;
}