#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}

int main(){
	string s;
	string res;
	getline(cin , s);
	to_lower(s);
	stringstream is(s);
	vector<string> b;
	while(is >> s){
		b.push_back(s);
	}
	res += b[b.size()-1];
	for(int i = 0; i < b.size()-1;i++){
		res += b[i][0];
	}
	res += "@ptit.edu.vn";
	cout << res;
}
