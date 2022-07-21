#include <bits/stdc++.h>
using namespace std;
//through gfg
int helper(vector<vector<int>>& tri, int i, int j){
	if(i == tri.size() ){
	return 0 ;
	}

	int mx ;
	mx = tri[i][j] + max(helper(tri, i+1,j), helper(tri,i+1, j+1)) ;
	return mx ;
}


int maxSumPath(vector<vector<int>>& tri) {
	return helper(tri, 0, 0) ;
}

int main()
{
	vector<vector<int> > tri{ { 1 },
							{ 2, 1 },
							{ 3, 3, 2 } };
	cout << maxSumPath(tri);
	return 0;
}
