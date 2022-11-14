#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int r[26] = {0};
		for(int i = 0; i < s.length(); i++){
			r[s[i] - 'A']++;
		}
		for(int i = 0; i < s.length(); i++){
			if(r[s[i] - 'A']>0){
				cout<<s[i]<<r[s[i] - 'A'];
				r[s[i] - 'A'] = 0;
			}
		}
		cout << endl;
	}
}