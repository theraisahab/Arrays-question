#include<bits/stdc++.h>

using namespace std;

int main(){
    int n= 5;
    int arr[n] = {7,3,4,5,6};

    bool sorted = true;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            sorted = false;
            break;
    }
    }
    if(sorted){
        cout << "Array is sorted";
    }else{
        cout << "Array is not sorted ";
    }

    return 0;
}
