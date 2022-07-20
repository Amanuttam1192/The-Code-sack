#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
	if(n==1 || n==0) return true;
	if(arr[0]<arr[1] && issorted(arr+1,n-1)) return true;
	else return false;
	
}
int main(){
	int arr[]={2,5,6,9,1,3,2,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<issorted(arr,n)<<endl;
	return 0;
}
