//Binary search on a reverse sorted array

#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> arr, int n, int c){
    int left= 0, right= n-1;
    while(left <= right) {
        int mid= left +  (right - left) /2;
        if( arr[mid] == c) return mid+1;
        if(arr[mid] < c) right= mid-1;
        else left= mid+1;
    }
    return 0;
}
int main(){
    vector<int> arr;
    int c,n;
    cin>>n;
    for(int  i  =0; i< n; i++) {
        cin>>c;
        arr.push_back(c);
    }
    cin>>c;
    cout<<binary(arr,n,c);
}