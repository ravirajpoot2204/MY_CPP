
#include <bits/stdc++.h>
using namespace std;

bool findByLinearSearch(int  arr[] , int size,int key){
    

       bool flag=false;
   for(int i = 0 ; i<size;i++){
       if(arr[i]==key){
           flag = true;
           return flag;
       }
   }
    
    
    
    cout<<"Going back to main"<<endl;
return flag;    
}
int main() {

   int arr [10]={0 ,5 ,2 ,-6 ,6 ,-5 ,4 ,7 ,8, -1 } ;
   cout<<"Enter the key to search : "<<endl;
int key ;
cin>>key;
   bool found = findByLinearSearch(arr,10,key);
 if(found){
     cout<<"Present !"<<endl;
 }else{
     cout<<"Not present"<<endl;
 }

    return 0;
}