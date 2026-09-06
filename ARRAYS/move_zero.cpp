#include<bits/stdc++.h>

using namespace std;
void move_zeros(int arr[], int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}
int main(){

    int n = 7;
    int arr[n] = {1, 0, 3, 0, 5, 2, 0};

    move_zeros(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}