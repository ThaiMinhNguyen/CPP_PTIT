#include<bits/stdc++.h>

using namespace std;

bool kt(string s){
	if(s.size()>1) return 0;
	int m = (int) s[0] - '0';
	if(m >= 0){
		return 1;
	}
	return 0;
}

int main(){
	int n, m;
	cin >> n >> m;
	int count = 0;
	string s[n][m];
	for(int i = 0 ; i < n;i++){
		for(int j = 0; j < m;j++){
			cin >> s[i][j];
		}
	}
	for(int i = 0 ; i < n;i++){
		for(int j = 0; j < m;j++){
			if(s[i][j] == "-1"){
				for(int k = i-1;k < n,k < i+2; k++){
					if(k < 0) continue;
					for(int l = j-1;l < m, l < j+2; l++){
						if(l < 0) continue;
						else {
							if(kt(s[k][l]) == 1){
								count++;
								s[k][l] = "10";
							}
						}
					}
				}
			}
		}
	}
	cout << count ;
}