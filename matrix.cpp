#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,c;
	cin >> r >> c;
	vector<vector<int>> v(r,vector<int>(c));
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>v[i][j];
		}
	}
	vector<vector<int>> mat(r,vector<int> (c));
	for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                mat[i][j] = v[i][j];
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(v[i][j]==0){
                    for(int k=0;k<r;k++){
                        mat[i][k] = 0;
                    }
                    for(int k=0;k<c;k++){
                        mat[k][j] = 0;
                    }
                }
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cout <<mat[i][j]<<" ";
            }
            cout <<'\n';
        }
}
