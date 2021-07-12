//Binary search in a nearly sorted array
//nearly sorted array means ith index ka element i+1 ya i-1 dono pe ho skta hai
//5 10 30 20 40 =>nearly sorted

#include<bits/stdc++.h>
using namespace std;
int binary (int arr[], int n, int x ){
    int left= 0, right= n-1;

    while(left <= right) {
        int mid= left + (right- left)/2;
        if( arr[ mid ] == x) return mid+1;
        if(mid-1 >= left && arr[ mid- 1] == x) return mid;
        if(mid+1 <= right && arr[ mid+ 1] == x) return mid+2;
        if( x < arr[mid]) right = mid-2;
        else if ( x > arr[mid]) left = mid +2;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i< n;i++ ) cin>>arr[i];
    int x;
    cin>>x;
    cout<<binary ( arr, n, x);
    return 0;

}
