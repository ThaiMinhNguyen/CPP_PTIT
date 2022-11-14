#include<bits/stdc++.h>

using namespace std;

bool twodot(string s){
	for(int i = 0; i < s.size()-1; i++){
		if(s[i] == '.' && s[i+1] == '.') return 0;
	}
	return 1;
}

bool kt(string s){
	if(s.size()>3) return 0;
	int m = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[i] < '0' || s[i] > '9' ) return 0;
		else {
			m = m*10 + (s[i] - '0');
		}
	}
	if(m <= 255){
		return 1;
	}
}


bool checkIP(string s){
	if(s.size() > 15) return 0;
	if(twodot(s) == 0) return 0;
	int count = 0;
	string s1;
	vector<string> res;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '.'){
			res.push_back(s1);
			s1 = "";
			count++;
		} else {
			s1 += s[i];
		}
	}
	res.push_back(s1);
	if(count != 3)return 0;
	for(auto x: res){
		if(kt(x) == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(checkIP(s) == 1){
			cout << "YES" << endl;
		} 
		else {
			cout << "NO" << endl;
		}
	}
}