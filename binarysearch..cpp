#include<bits/stdc++.h>
using namespace std;
int binsearch(int n,int arr[],int x){
	sort(arr,arr+n);
	int low=0;
	int high=n-1;
	int ans=0;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]>=x) {
		ans=arr[mid];
		high=mid-1;
	}
	
		else if(x>arr[mid]){
		    low=mid+1;
		}
	}
	return ans;
	
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
