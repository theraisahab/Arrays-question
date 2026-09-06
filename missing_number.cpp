#include<bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> &a, int n){
    int XOR = 0;
    for(int i=1; i<=n; i++){
        XOR = XOR ^ i;
    }

    for(int x : a){
        XOR  = XOR ^ x;
    }
    return XOR;
}

int main(){
    vector<int> a = {1,2,4,5};
    int n = 5;
    cout<< "Missing number : "  << missingNumber(a,n);
}


// Time  = O(n)
// Space = O(1)