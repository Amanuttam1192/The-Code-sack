#include<bits/stdc++.h>
using namespace std;
void pair1(int arr[],int n){
	for(int i=0;i<n;i++){
		int x=arr[i];
		for(int j=1;j<n;j++){
			int y=arr[j];
			cout<<x<<","<<y<<endl;
		}
	}
}
int main(){
	int arr[]={10,20,1,8,5,4,6,5};
	int n=sizeof(arr)/sizeof(int);
	pair1(arr,n);
}

