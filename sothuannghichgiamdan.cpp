#include<bits/stdc++.h>

using namespace std;

bool kt(string s){
	if(s.size()<2) return 0;
	for(int i = 0; i < s.length()/2;i++){
		if(s[i]!= s[s.length()-1-i]){
			return 0;
		}
	}
	return 1;
}

bool cmp(string a, string b){
	if(a.size()>b.size()){
		return 1;
	}
	if(a.size()<b.size()){
		return 0;
	}
	for(int i = 0 ;i < a.size(); i++){
		if(a[i] > b[i]) return 1;
		if(a[i] < b[i]) return 0;
	}
	return 0;
}

int main(){
//	int x = 0;
	map<string, int> mp;
	vector<string> res;
	string s;
	while(cin >> s){
//		++x;
//		string s;
//		cin >> s;
		if(kt(s)){
			mp[s]++;
			if(mp[s]==1){
				res.push_back(s);
			}
		}
	}
	sort(res.begin(), res.end(), cmp);
	for(auto x:res){
		cout << x << " " << mp[x] << endl;
	}
}