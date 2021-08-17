//Maximum (or minimum) sum of a subarray of size k
// Window sliding technique
//T.C.: O(n)

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int arr_size, int subarr_size){

    int result = 0;
    int current_sum = 0;
    if(subarr_size > arr_size){
        cout<<"Invalid";
        return -1;
    }
    for(int i=0; i<subarr_size; i++){
        result+= arr[i];
    }
    current_sum = result;
    for(int i=subarr_size; i<arr_size; i++){
        current_sum += arr[i] - arr[i-subarr_size];
        result = max(result, current_sum);
    }
    return result;
}
int main(){
     int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int ans = solve(arr,8,3);
}
