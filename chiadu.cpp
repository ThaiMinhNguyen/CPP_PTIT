#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, m;
		cin >> a >> m;
		int dau = m/a;
		int check = -1;
		for(int i = 0; i < m; i++){
			if((a*i)%m == 1){
				check = 1;
				cout << i << endl;
				break;
			}
		}
		if(check == -1) cout << -1 << endl;
	}
}