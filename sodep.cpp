#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int check = 1;
		for(int i = 0; i < s.size()/2; i++){
			if((s[i] - '0') % 2 != 0 || s[i] != s[s.length()-1-i]){
				check = 0;
				break;
			}
		}
		if(check){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}