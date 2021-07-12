//Next alphabetical element/letter

#include<bits/stdc++.h>
using namespace std;
int next (char arr[],int n, char c){
    int left= 0, right= n;
    char res='0';
    while(left <= right) {
        int mid= left + (right- left)/2;
        if( arr[mid] > c)  {
            right= mid-1;
            res= mid;
        }
        else {      
            left = mid +1;
        }
    }
    return res;
}
int main(){
    int n,i;
    cin>>n;
    char arr[n+1];
    for(i=0; i< n; i++) cin>>arr[i];
    arr[n]='#';
    char c;
    cin>>c;
    cout<<arr[next(arr, n+1, c)];
}