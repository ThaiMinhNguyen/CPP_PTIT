#include<bits/stdc++.h>

using namespace std;

bool check(string s){
	int n = s.size();
	if(s[0] == s[1] && s[1] == s[2] && s[2] == s[3] && s[3] == s[4]){
		return true;
	}
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4]){
		return true;
	}
	if(s[0] == s[1] - 1 && s[1] == s[2] - 1 && s[2] == s[3]- 1 && s[3] == s[4]- 1){
		return true;
	}
	else if((s[0] == '6' || s[0] == '8' ) && (s[1] == '6' || s[1] == '8' ) && (s[2] == '6' || s[2] == '8' ) && (s[3] == '6' || s[3] == '8' ) && (s[4] == '6' || s[4] == '8' )){
		return true;
	}
	return false;
}

string doi(string s){
	string res;
	int n = s.size()-1;
	while(n >=s.size()-6){	
		if(s[n] >= '0' && s[n] <= '9'){
			res = s[n] + res;
		}
		n--;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res = doi(s);
		if(check(res) == true){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}