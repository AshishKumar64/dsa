// Kadane algorithm
// Time complexity- O(n)
// Output: 7
#include<bits/stdc++.h>
using namespace std;

int Kadane(int arr[], int size){
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum = sum + arr[i];
        if(max_sum < sum){
            max_sum = sum;
        }
        if(sum < 0){
            max_sum = 0;
        }
    }
    return max_sum;
}
int main(){
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int max_sum = Kadane(arr,8);
}