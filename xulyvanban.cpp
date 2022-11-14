#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}

void toUpperFirstLetter(string &s){
	s[0] = toupper(s[0]);
}

void bodau(string &s){
	if(s[s.size()-1] == '?'|| s[s.size()-1] == '.' || s[s.size()-1] == '!'){
		s.pop_back();
	}
}

bool check(string s){
	if(s[s.size()-1] == '?'|| s[s.size()-1] == '.' || s[s.size()-1] == '!'){
		return 1;
	}
	return 0;
}

int main(){
	string s;
	to_lower(s);
	vector<string> a;
	string push;
	while(cin >> s){
		if(push == ""){
				push = push + s;
			} else {
				push = push + " " + s;
		}
		if(check(push)){
			to_lower(push);
			push.pop_back();
			push[0] = toupper(push[0]);
			a.push_back(push);
			push = "";
		}
	}
	for(auto x:a){
//		toUpperFirstLetter(x);
		cout << x << endl;
	}
}