#include<bits/stdc++.h>
using namespace std;
int binsearch(int n,int arr[],int x){
	sort(arr,arr+n);
	int low=0;
	int high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==x) return mid;
		else if(x<arr[mid]){
			high=mid-1;
		}
		else if(x>arr[mid]){
		    low=mid+1;
		}
	}
	return -1;
	
};
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<binsearch(n,arr,x);
}
