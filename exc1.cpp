#include<bits/stdc++.h>
#include<vector>
using namespace std;
int largest(vector<int> arr,int x){
    for(int i=0;i<x;i++){
        if(arr[i]>arr[i+1]){
            cout<<arr[i];
        }
    }
    
}
int main(){
    vector<int> arr;
    int x=sizeof(arr)/sizeof(int);
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    
    largest(arr,x);
}
