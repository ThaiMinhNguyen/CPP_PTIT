#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = tolower(s[i]);
	}	
}

int main(){
	ifstream f1;
	ifstream f2;
	f1.open("DATA1.in");
	f2.open("DATA2.in");
	set<string> hop;
	set<string> giao;
	vector<string> st;
	string s;
	while(f1 >> s){
		to_lower(s);
		hop.insert(s);
		st.push_back(s);
	}
	while(f2 >> s){
		to_lower(s);
		hop.insert(s);
		for(auto x:st){
			if(x == s){
				giao.insert(s);
			}
		}
	}
	for(auto x:hop){
		cout << x <<" ";
	} 
	cout << endl;
	for(auto x:giao){
		cout << x <<" ";
	} 
	f1.close();
	f2.close();
}