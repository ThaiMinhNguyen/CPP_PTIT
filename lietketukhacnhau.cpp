#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}

int main(){
	ifstream f1;
	f1.open("VANBAN.in");
	set<string> l;
	string s;
	while(f1 >> s){
		to_lower(s);
		l.insert(s);
	}
	for(auto x:l){
		cout << x << endl;
	}
	f1.close();
}