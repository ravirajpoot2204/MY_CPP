#include <iostream>
using namespace std;
int main() {

int n ;
cout<<"Enter a number.."<<endl;
cin>>n;


int row=1 ;

while(row<=n){
    int col=1;
    while(col<=n-row+1){
        cout<<col;
        col++;
    }
    int space=2*(row-1);
    while(space){
        cout<<"*";
        space--;
    }
    col=col-1;
    while(col>=1){
        cout<<col;
        col--;
    }
    cout<<endl;
    row++;
}

    return 1;
}