#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	map<int, int> mp;
	int a[n];
	int b[m+1];
	for(int i = 1; i <= m; i ++){
		mp[i] = 0;
	}
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	for(int i = 1; i <= m; i ++){
		b[i-1] = mp[i];
	}
	int check = 1;
	for(int i = 1; i <= m; i ++){
		if(mp[i] != mp[1]){
			check = 0;
			break;
		}
	}
	if(check == 1){
		cout << "NONE" ;
		return 0;
	}
	sort(b, b+m);
	for(int i = 1; i <= m; i ++){
		if(mp[i]==b[m-2]){
			cout << i;
			return 0;
		}
	}
}