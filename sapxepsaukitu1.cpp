#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		unordered_map<char, int> m;
		int max_freq = 0;
		for(int i = 0; i < s.length(); i++){
			m[s[i]]++;
			if(m[s[i]] > max_freq){
				max_freq = m[s[i]];
			}
		}
		if((max_freq-1) <= (s.length() - max_freq)){
			cout << 1 << endl;
		} else{
			cout << 0 << endl;
		}
	}
}