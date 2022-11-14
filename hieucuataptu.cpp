#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string a, b;
		getline(cin, a);
		getline(cin, b);
		map<string, int> mp;
		set<string> v;
		stringstream is(a);
		while(is >> a){
			v.insert(a);
			mp[a] = 0;
		}
		stringstream iss(b);
		while(iss >> b){
			mp[b] ++;
		}
//		sort(v.begin(), v.end());
		for(auto x: v){
			if(mp[x] == 0){
				cout << x << " ";
			}
		}
		cout << endl;
	}
}