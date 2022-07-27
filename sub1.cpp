#include<bits/stdc++.h>
using namespace std;
void nachopairs(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout<<"("<<i<<","<<j<<"),";
			for(int k=1;k<j;k++){
				cout<<arr[k]<<",";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
}
int main(){
	int arr[]={10,2,58,4,5,63,2};
	int n=sizeof(arr)/sizeof(int);
	nachopairs(arr,n);
}
