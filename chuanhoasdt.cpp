#include<bits/stdc++.h>

using namespace std;

string chuanhoa(string s){
	string res;
	if(s[0] == '8' && s[1] == '4'){
		res += '0';
		for(int i = 2; i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				res += s[i];
			}
		}
		return res;
	}
	if(s[1] == '8' && s[2] == '4'){
		res += '0';
		for(int i = 3; i < s.length(); i++){
			if(s[i] >= '0' && s[i] <= '9'){
				res += s[i];
			}
		}
		return res;
	} 
	for(int i = 0; i < s.length(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			res += s[i];
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	vector<string> res;
	while(t--){
		string s;
		getline(cin, s);
		cout << chuanhoa(s) << endl;
	}
}