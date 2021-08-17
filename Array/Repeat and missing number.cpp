//time complexity: O(n)
//space complexity: O(1)
//first way:
// Let x be the missing and y be the repeating element.
// Let N is the size of array.
// Get the sum of all numbers using formula S = N(N+1)/2
// Get the sum of square of all numbers using formula Sum_Sq = N(N+1)(2N+1)/6
// Iterate through a loop from i=1….N
// S -= A[i]
// Sum_Sq -= (A[i]*A[i])
// It will give two equations 
// x-y = S – (1) 
// x^2 – y^2 = Sum_sq 
// x+ y = (Sum_sq/S) – (2)



#include<bits/stdc++.h>
using namespace std;
int repeat_and_missing(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[abs(arr[i]) - 1] > 0){
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        }
        else{
            //Repeating element
            cout<< abs(arr[i]) << "\n";
        }
    }
    for(int i=0;i<size;i++) {
        if(arr[i] > 0){
            //Missing element
            cout<<(i+1);
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,4,6,8,9,7};
    int ans = repeat_and_missing(arr,9);
    return 0 ;
}