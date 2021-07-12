//Binary search
//Sorted array given, think for binary search
//condition to check if numbrers matched, condition to go left or right
// jo aata hau uska code likh lo fir modify karo
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> arr, int n, int c){
    int left= 0, right= n-1;
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