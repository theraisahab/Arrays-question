// #include<bits/stdc++.h>

// using namespace std;

// void bubble_sort(int arr[], int n){
//     for(int i=n-1; i>=0; i--){
//         for(int j=0; j<=i; j++){
//             if(arr[j]>arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int n;
//      cin>> n;

//      int arr[n];
//      for(int i=0; i<n; i++){
//         cin >> arr[i];
//      }

//     bubble_sort(arr, n);

//     cout << arr[n-1];
//     return 0;
// }




#include<bits/stdc++.h>

using namespace std;

int largestElement(vector<int> &arr, int n){
    int largest = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int> arr = {2, 5, 3, 9, 4};
    int n = 5;
    cout << largestElement(arr, n);
     return 0;
}