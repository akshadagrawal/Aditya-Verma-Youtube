//binary search on a infinite sorted array

#include<bits/stdc++.h>
using namespace std;
int binary(int arr[], int x){
    int left =0 , right= 1;
    while ( arr[right] < x) {
        left =right;
        right= right*2;
    }

    while(left <= right) {
        int mid= left + (right-left)/2;
        if(arr[mid] == x )return mid+1;
        else if (arr[mid ] < x) left= mid+1;
        else right= mid-1;
    }
    return -1;
}
int main(){
    int infiniteArray[] = {1,2,4,6,8,9,12,15,17,19,24};
    int x;
    cin>>x;
    cout<<binary(infiniteArray, x);
}