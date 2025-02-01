#include<bits/stdc++.h>
using namespace std;
int findUnique(int *arr, int size)
{
    int ans = 0;
    for(int i = 0 ; i<size ;i++){
        ans = ans^arr[i];
    }
     return ans;
}
int main (){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr [100];
    for(int i = 0 ; i<size;i++){
        cin>>arr[i];
    }
    cout<<"Unique Value of array is : "<<(findUnique(arr,size))<<endl;
    return 0;
}