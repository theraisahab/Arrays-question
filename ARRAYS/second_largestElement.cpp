#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[] = {5,2,9,1,7};
    int n = 5;
    int largest  = arr[0];
    int slargest = -1;

    for(int i=1; i<n; i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] > slargest && arr[i] != largest){
            slargest = arr[i];
        }
    }

    cout << " Second Largest Element is : " << slargest;

    return 0;
}