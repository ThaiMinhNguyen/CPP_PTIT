#include<bits/stdc++.h>

using namespace std;

void Try(int i , int j, vector<vector<int>> &res){
	if(i < 0 || j < 0 || j >= res[0].size() || i >= res.size() || res[i][j] == 0) return;
	res[i][j] = 0;
	Try(i + 1, j ,res);
	Try(i - 1, j ,res);
	Try(i, j + 1 ,res);
	Try(i, j - 1 ,res);
	Try(i + 1, j + 1,res);
	Try(i + 1, j - 1 ,res);
	Try(i - 1, j - 1 ,res);
	Try(i - 1, j + 1 ,res);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n][m];
		vector<int> v;
		vector<vector<int>> res;
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> a[i][j];
				v.push_back(a[i][j]);
			}
			res.push_back(v);
			v.clear();
		}
		int count = 0;
		for(int i = 0; i < res.size(); i++){
			for(int j = 0; j < res[0].size(); j++){
				if(res[i][j] == 1){
					count++;
					Try(i, j, res);
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}