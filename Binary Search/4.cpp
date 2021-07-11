//how many times is sorted array rotated
// 2 4 6 8 11 12 15 18 => 11 12 15 18 2 4 6 8

#include<bits/stdc++.h>                        
using namespace std;
int sorted(int arr[], int n){
    int left= 0, right= n-1;
    while (left <= right) {
        int mid= left + (right-left)/2;
        int next = (mid+1)%n, prev= (mid+n-1)%n;
        //contion to chehck if number matched
        if( arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return mid;
        }
        //condition to go left or right
        if( arr[left] <= arr[mid])  left = mid;
        else if (arr[mid] <= arr[right]) right= mid;
    }
    return -1;
}
int binary(int arr[], int left, int right, int c){
    while(left <= right) {
        int mid= left +  (right - left) /2;
        
        //contion to chehck if number matched
        if( arr[mid] == c) return mid+1;

        //condition to go left or right
        if(arr[mid] < c) left= mid+1;
        else right= mid-1;
    }
    return 0;
}
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0; i< n;i ++) cin>>arr[i];
   int x; cin>>x;
   int minindex = sorted(arr, n);
   if(binary(arr,0, minindex-1,x)) cout<<binary(arr,0,minindex-1,x);
   else cout<<binary(arr,minindex, n-1,x);
   
   return 0;
}