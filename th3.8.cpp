#include<bits/stdc++.h>

using namespace std;

void inthuong(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = tolower(s[i]);
	}
}

int main(){
	ifstream f;
	f.open("CONTACT.in");
	set<string> res;
	while(!f.eof()){
		string s;
		f >> s;
		inthuong(s);
		res.insert(s);
	}
	f.close();
	for(auto x:res){
		cout << x << endl;
	}
}