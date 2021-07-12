//First and last occurence 
//count of element in  rotataed sorted array

#include<bits/stdc++.h>
using namespace std;
pair<int,int> occurence(vector<int> arr, int n, int c){
    int left= 0, right= n-1;
    int leftIndex=-1, rightIndex=-1;
    while(left <= right) {
        int mid= left +  (right - left) /2;
        if( arr[mid] == c) {
            leftIndex= mid;
            right= mid-1;
        }
        else if(arr[mid] < c) left= mid+1;
        else right= mid-1;
    }
    left =0 ;  right=n-1;
     while(left <= right) {
        int mid= left +  (right - left) /2;
        if( arr[mid] == c) {
            rightIndex= mid;
            left= mid+1;
        }
        else if(arr[mid] < c)
            left= mid+1;
        
        else right= mid-1;
    }
    return make_pair(leftIndex, rightIndex);
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
    pair<int, int> p= occurence(arr,n,c);
    cout<<p.first<<" "<<p.second;
}