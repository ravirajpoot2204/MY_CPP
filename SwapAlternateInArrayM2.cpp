// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[],int size){
    for(int i = 0 ; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void alternateSwap(int arr[],int size){
    for(int i=0; i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main() {
    // Write C++ code here
int even [8]={11,22,33,44,55,66,778,899};
int odd[7] = {11,22,33,44,55,66,77};
printArray(even,8);
alternateSwap(even,8);
printArray(even,8);
printArray(odd,7);
alternateSwap(odd,7);
printArray(odd,7);
    return 0;
}