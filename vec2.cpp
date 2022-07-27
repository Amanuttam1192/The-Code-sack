#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
	//vector<int> arr(10,5);
	vector<int> arr = {10,15,25,14,78,789};
	arr.pop_back();
	cout<<arr.size()<<endl;
	cout<<arr.capacity()<<endl;
	
	arr.push_back(120);
	for(int i=0;i < arr.size();i++){
		cout<<arr[i]<<",";
	}
	return 0;
}
