#include<bits/stdc++.h>
using namespace std;


void extractDigits(){
    int n;
    cin >> n;
    int i = 0;
    while(n>0){
        int lastDigit = n%10;
        cout << lastDigit << " "<< endl;
        
        i++
        ;
        
        n = n/10;
    }
    cout << i;
}
int main(){
    // int n;
    // int reverse = 0;
    // cin >> n;
    // while(n>0){
    //     int lastDigit = n%10;
    //     n = n/10;
    //     reverse = (reverse *10) +lastDigit;
    // }

    // cout << reverse;
    
    // int n;
    // cin >> n;
    // for(int i=1; i<=n; i++){
    //     if(n%i== 0){
    //         cout << i << endl;

    //     }
    // }

    // int n;
    // int count =0;
    // cin >> n;
    // for(int i=1; i <=n; i++){
    //     if(n%i == 0){
    //         count ++;
         
    //     }
    // }
    //    if(count == 2){
    //         cout << "It's a prime number";
    //     }else{
    //         cout << "It's not a prime number";
    //     }

    // int n1 , n2;
    // cin >> n1 >> n2;
    // int gcd =1;
    // for(int i =1; i<=min(n1,n2); i++){
    //     if(n1%i == 0 && n2%i ==0){
    //        cout << i;
    //        break;
    //     }

    // }

    int n;
    cin >> n;
    int reverse = 0;
    while (n!= 0){
        int lastDigit = n%10;
        n = n/10;

        reverse = (reverse*10) +lastDigit;


    }
    cout << reverse;
   
    return 0;
}