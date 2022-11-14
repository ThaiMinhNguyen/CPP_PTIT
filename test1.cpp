#include<bits/stdc++.h>

using namespace std;

bool checkIP(string s){
	if(s.size() > 15) return 0;
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
		
	}
}

int main(){
	string s;
	cin >> s;
	checkIP(s);
}