#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}

string to_upper(string s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}
	return s;	
}

string toUpperFirstLetter(string s){
	s[0] = toupper(s[0]);
	return s;
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
	for(int i = 0; i < b.size()-1;i++){
		res += toUpperFirstLetter(b[i]);
		if(i != b.size() - 2)res += " ";
		else res += ", ";
	}
	res += to_upper(b[b.size()-1]);
	cout << res;
}
