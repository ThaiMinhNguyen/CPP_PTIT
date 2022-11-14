#include<bits/stdc++.h>

using namespace std;

int doi(string s){
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		res = res * 10 +(s[i] - '0');
	}
	return res;
}

int tong(string s){
	string r;
	int res = 0;
	int i = 0;
	for(i; i < s.size(); i++){
		if(s[i] >= '0' && s[i] <= '9'){
			r.push_back(s[i]);
		}
		else {
			r = r + " ";
		}
	}
	stringstream is(r);
	while(is >> r){
		if(doi(r) > res){
			res = doi(r);
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
//		cout << doi(s);
		cout << tong(s) << endl;
	}
}