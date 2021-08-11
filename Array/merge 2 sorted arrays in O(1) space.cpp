//Merge two sorted arrays without extra space
//time complexity O((n+m)log(n+m))
//space complexity O(1)


1) Initialize i,j,k as 0,0,n-1 where n is size of arr1 
2) Iterate through every element of arr1 and arr2 using two pointers i and j respectively
    if arr1[i] is less than arr2[j]
        increment i
    else
        swap the arr2[j] and arr1[k]
        increment j and decrement k

3) Sort both arr1 and arr2 

#include<bits/stdc++.h>
using namespace std;
int mergeArrays(int a1[], int a2[], int n, int m){
    int i=0;
    while(a1[n-1] > a2[0]){
        if(a1[i]>a2[0]){
            swap(a1[i],a2[0]);
            sort(a2,a2+m);
        }
        i++;
    }
}
int mergeArrays(int a1[], int a2[], int n, int m){
    int i=0, j=0, k=n-1;
    while(i<=k and  j<m){
        if(a1[i]<a2[0]){
            i++;
        }
        else{
            swap(a2[j++],a1[k--]);
        }
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
}
int main(){  
    int a1[] = {1,3,5,7,9};
    int a2[] = {2,3,4,6};
    int result = mergeArrays(a1,a2,5,4);
} 

