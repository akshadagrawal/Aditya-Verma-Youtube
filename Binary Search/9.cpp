//1st occurence of 1 in sorted aray of 0's and 1's

#include<bits/stdc++.h>
using namespace std;
int binary(int arr[]){
    int left =0 , right= 1;
    while ( arr[right] != 1) {
        left =right;
        right= right*2;
    }
    int index= right;
    while(left <= right) {
        int mid= left + (right-left)/2;
        if(arr[mid] == 1 ) {
            index= mid;
            right= mid-1;
        }
        else if (arr[mid ]== 0 ) left= mid+1;
    }
    return index;
}
int main(){
    int infiniteArray[] = {0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};

    cout<<binary(infiniteArray);
}