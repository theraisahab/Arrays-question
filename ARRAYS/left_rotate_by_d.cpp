// // #include<bits/stdc++.h>

// // using namespace std;

// // void leftRotate(int arr[], int n, int d){
// //     d = d%n;
// //     int temp[d];

// //     for(int i=0; i<d; i++){
// //         temp[i] = arr[i];
// //     }

// //     for(int i=d; i<n; i++){
// //         arr[i-d] = arr[i];
// //     }

// //     for(int i=n-d; i<n; i++){
// //         arr[i] = temp[i-(n-d)];
// //     }


// // }

// // int main(){
// //     int d = 7;
// //     int n = 5;
// //     int arr[n] = {1,2,3,4,5};

// //     leftRotate(arr, n, d);
// //     for(int i=0; i<n; i++){
// //         cout << arr[i] << " ";
// //     }
// // }




// #include<bits/stdc++.h>

// using namespace std;


// void leftRotate(int arr[], int n, int d){
//     d = d % n;
//     int temp[d];

//     for(int i=0; i<d; i++){
//         temp[i] = arr[i];
//     }

//     for(int i=d; i<n; i++){
//         arr[i-d] = temp[i];
//     }

//     for(int i= n-d; i <n; i++){
//         arr[i] = temp[i-(n-d)];
//     }
// }

// int main(){
//     int n=5;
//     int arr[n] = {1,2,3,4,5};
//     int d = 7;
//     leftRotate(arr, n, d);

//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;
// }




    // #include<bits/stdc++.h>

    // using namespace std;

    // void leftRotate(int arr[], int n, int d){
    //     d = d%n;
        
    //     int temp[d];

    //     for(int i=0; i<d; i++){
    //         temp[i] = arr[i];
    //     }

    //     for(int i=d; i<n; i++){
    //         arr[i-d] = arr[i];
    //     }

    //     for(int i=n-d; i<n; i++){
    //         arr[i] = temp[i- (n-d)];
    //     }

    // }

    // int main()
    // {
    //     int n =5;
    //     int arr[n] = {1,2,3,4,5};
    //     int d = 7;
    //     leftRotate(arr, n, d);

    //     for(int i=0; i<n; i++){
    //         cout << arr[i] << " ";
    //     }
    //     return 0;
    // }


    #include<bits/stdc++.h>

    using namespace std;

    void leftRotate(int arr[], int n, int d){
        d = d%n;
        int temp[d];
        for(int i=0; i<d; i++){
            temp[i] = arr[i];
        }
        for(int i =d; i<n; i++){
            arr[i-d] = arr[i];
        }

        for(int i=n-d; i<n; i++){
            arr[i] = temp[ i - (n-d)];
        }
    }

    int main(){
        int n = 7;
        int arr[n] = {1,2,3,4,5,6,7};
        int d = 3;
        leftRotate(arr, n, d);

        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
    }