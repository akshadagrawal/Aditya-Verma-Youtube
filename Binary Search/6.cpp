/*
    find floor of a elemnt using binary search
    1 2 4 6 9 10 => floor  and ceil of 4 is 4 , floor of 5 is also 4
 */
#include<bits/stdc++.h>
using namespace std;
int floor(int arr[], int n, int c){
    int left= 0, right= n-1;
    int res=-1;
    while(left <= right) {
        int mid= left +  (right - left) /2;
        
        //contion to chehck if number matched
        if( arr[mid] == c) return mid+1;

        //condition to go left or right
        else if(arr[mid] < c)  {
            res= mid+1;
            left= mid+1;
        }
        else right= mid-1;
    }
    return res;
}
int ceil(int arr[], int n, int c){
    int left= 0, right= n-1;
    int res=-1;
    while(left <= right) {
        int mid= left +  (right - left) /2;
        
        //contion to chehck if number matched
        if( arr[mid] == c) return mid+1;

        //condition to go left or right
        else if(arr[mid] < c)  left= mid+1;
        else {
            res= mid+1;
            right= mid-1;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n ;i++) cin>>arr[i];
    int x;
    cin>>x;
    cout<<floor(arr,n,x);
    cout<<ceil(arr, n, x);

}