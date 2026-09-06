#include<bits/stdc++.h>

using namespace std;

int longestSubarray(vector<int> &arr, int k){
    int n = arr.size();
    int maxi=0;

    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
            sum = sum + arr[j];
            if(sum == k){
                maxi = max(maxi, j-i+1);
            }
        }
    }
    return maxi;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    int result = longestSubarray(arr, k);
    cout << result;
    return 0;
}