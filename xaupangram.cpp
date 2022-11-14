#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int n;
		cin >> s >> n;
//		if(s.length() < 26){
//			cout << 0 << endl;
//			continue;
//		}
//		int c[26];
//		int count = 0;
//		for(int i = 0; i < s.length();i++){
//			c[s[i] - 'a'] = true;
//		}
//		for(int i = 0; i < 26; i++){
//			if(!c[i]){
//				count++;
//			}
//		}
//		if(count <= n){
//			cout << 1 << endl;
//		} else {
//			cout << 0 << endl;
//		}
		set<char> check;
		for(int i = 0; i < s.length();i++){
			check.insert(s[i]);
		}
		int res = 26 - check.size();
		if(res <= n){
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}