#include<bits/stdc++.h>

using namespace std;

int main(){
    int n = 5;
    int arr[n] = {5, 3, 6, 7, 4};
    int target = 4;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            cout << i;
        }
    }
    return 0;
}