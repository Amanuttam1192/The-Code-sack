#include<bits/stdc++.h>
using namespace std;
int main(){
    int y;
    int x;
    cin>>y;
    int ans=0;
    for(int i=0;i<x;i++){
        cin>>x;
        if(i%y==0)
        ans++;
    }
    cout<<ans;
    return 0;
}
