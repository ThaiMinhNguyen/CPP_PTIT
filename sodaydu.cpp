#include<bits/stdc++.h>

using namespace std;

string check(string s){
	set<char> k;
	if(s[0] == '0'){
		return "INVALID";
	}
	for(int i = 0; i < s.size(); i++){
		if(s[i] < '0' || s[i] > '9' ){
			return "INVALID";
		}
		k.insert(s[i]);
	}
	if(k.size()==10){
		return "YES";
	}
	return "NO";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
}