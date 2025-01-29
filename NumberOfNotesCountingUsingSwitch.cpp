// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int num,notes ;
    
    cout<<"Enter a amount"<<endl;
    cin>>num;
    
    switch (1){
        case 1 : 
         notes = num/100;
        cout<<"Number of notes of 100 : "<<notes<<endl;
        num = num - notes*100;
        case 2 : 
         notes = num/50;
        cout<<"Number of notes of 50 : "<<notes<<endl;
        num = num - notes*50;
        case 3 : 
         notes = num/20;
        cout<<"Number of notes of 20 : "<<notes<<endl;
        num = num - notes*20;
        case 4 : 
        notes = num/1;
        cout<<"Number of notes of 1 : "<<notes<<endl;
        num = num - notes*100;
    
        
    }
    return 0;
}