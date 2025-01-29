   #include<bits/stdc++.h>
   using namespace std;
   int reverse(int x) {
      int rev = 0;

    while(x!=0){
        int digit = x%10;
        if((rev > (INT_MAX/10))||(rev< (INT_MIN))){
            return 0;
        }


        rev = rev*10 +digit;
        x = x /10 ;
     
    }
  
    return rev;
    }
    int main(){
        int n ;
        cout<<"Enter a number to get reverse (range -2^31 to 2^31-1) "<<endl;
        cin>>n;
     int rev = reverse(n);
     if(rev == 0){
        cout<<"You have entered a number that is out of range "<<endl;
        return 0 ;
     }else {
        cout<<"Your reverse number of you entered is : "<<rev<<endl;
 return 1;      
     }

        
    }