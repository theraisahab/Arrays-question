#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &arr){

    int ans = 0;
    for(int x: arr){
        ans = ans ^ x;
    }
    return ans;
    
}
int main(){
    vector<int> arr = {1,2,3,3,4,4};

    int result = singleNumber(arr);
    cout << result;
    return 0;

}