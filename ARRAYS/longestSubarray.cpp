// //brute Force approach


// #include<bits/stdc++.h>

// using namespace std;

// int longestSubarray(vector<int> &arr, int k){
//     int n = arr.size();
//     int maxi=0;

//     for(int i=0; i<n; i++){
//         int sum=0;
//         for(int j=i; j<n; j++){
//             sum = sum + arr[j];
//             if(sum == k){
//                 maxi = max(maxi, j-i+1);
//             }
//         }
//     }
//     return maxi;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
//     int k = 3;
//     int result = longestSubarray(arr, k);
//     cout << result;
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;

// int longestSubarray(vector<int> arr, int k){
//     int n = arr.size();
//     int maxi = 0;

//     for(int i=0; i<n; i++){
//         int sum =0;
//         for(int j=i; j<n; j++){
//             sum = sum +arr[j];
//             if(sum == k){
//                 maxi = max(maxi, j-i+1);
//             }
//         }
//     }
//     return maxi;
// }

// int main(){
//     vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
//     int k = 3;
//     int result = longestSubarray(arr, k);
//     cout << result;
//     return 0;
// }




// #include<bits/stdc++.h>

// using namespace std;

// int longestSubarray(vector<int> &arr, int k){
//     int n = arr.size();
//     int maxi = 0;

//     for(int i=0; i<n; i++){
//         int sum = 0;
//         for(int j=i; j<n; j++){
//             sum += arr[j];
//             if( sum == k){
//                 maxi = max(maxi, j-i +1);
//             }
//         }
//     }
//     return maxi;
// }

// int main(){
//     vector<int> arr = {2,0,3};
//     int k = 3;
//     int result = longestSubarray(arr, k);
//     cout << result;
//     return 0;
// }

//Optimal aaproach

//Two pointer approach this approach work with only positive number.....

#include<bits/stdc++.h>

using namespace std;

int longestSubarray(vector<int> &arr, int k){
    int left =0;
    int right =0;

    int sum = 0;
    int maxi = 0;

    while(right < arr.size()){

        //add the new element to the window
        sum += arr[right];
        //if the sum become too large
        //remove the elements

        while(sum > k && left <= right){
            sum -= arr[left];
            left++;
        }
        // if we find sum k,
        //calculate the window length
        if(sum == k){
            maxi= max(maxi, right -left +1);
        }
        right ++;

    }
    return maxi;
}

int main(){
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;
    int result =longestSubarray(arr, k);
    cout << result;
}