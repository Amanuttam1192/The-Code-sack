#include<bits/stdc++.h>
using namespace std;
int reverse(int arr[],int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s+=1;
		s-=1;
	}
	
	
}
int main(){
	int arr[]={1,5,25,11,23,52,54,10};
	int n=sizeof(arr)/sizeof(int);
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	} 
	reverse(arr,n);
	
}
