#include<bits/stdc++.h>
using namespace std;
int largest_sum(int arr[],int n){
	int largestsum=0;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			int subarraysum=0;
			for(int k=i;k<j;k++){
				subarraysum += arr[k];
			}
			largestsum=max(largestsum,subarraysum);
		}
	}
	return largestsum;
}
int main(){
	int arr[]={10,-5,5,-8,1,-3,6,8,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<largest_sum(arr,n);
}
