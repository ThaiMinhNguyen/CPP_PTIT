#include<bits/stdc++.h>

using namespace std;

bool chu(char a){
	if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) return 1;
	return 0;
}

bool so(char a){
	if (a >= '0' && a <= '9') return 1;
	return 0;
}


bool kt(string s){
	int a = -1;
	int b = -1;
	int count = 0;
	for(int i = 0 ; i < s.length(); i++){
		if(s[i] == '@'){
			a = i;
			count ++;
		} else if(s[i] == '.'){
			b = i;
		}
	}
	
	for(int i = 0; i < a; i++){
		if(chu(s[i]) == 0 && so(s[i]) == 0 && s[i] != '_' && s[i] != '.'){
			return 0;
		}
	}
	for(int i = a+1; i < s.length(); i++){
		if(chu(s[i]) == 0 && so(s[i]) == 0 && s[i] != '_' && s[i] != '.'){
			return 0;
		}
	}
	
	if(a == -1 || b == -1){
		return 0;
	}
	if(count > 1) return 0;
	if(a > b){
		return 0;
	}
	if(s[s.length()-1] == '.') return 0;
	for(int i = a+1; i < s.length()-1; i++){
		if(s[i] == '.' && s[i+1] == '.'){
			return 0;
		}
	}
	return 1;
}

int main(){
//	freopen("Da.in", "r", stdin);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(kt(s) == 1) cout << "YES" << endl;
		else {
			cout << "NO" << endl;
		}
	}
}

//bool kt(string s){
//	int count = 0;
//	for(int i = 0; i < s.length(); i++){
//		if(s[i] == ' ') return 0;
//		if(s[i] == '@') count++;
//		if(count > 1) return 0;
//	}
//	stringstream is(s);
//	string truoc, sau;
//	getline(is, truoc, '@');
//	getline(is, sau, '@');
//	for(int i = 0; i < truoc.length(); i++){
//		if(truoc[i] >= 'a' && truoc[i] <= 'z'|| truoc[i] >= 'A' && truoc[i] <= 'Z'|| truoc[i] >= '0' && truoc[i] <= '9'|| truoc[i] == '_' || truoc[i] == '.'){
//			continue;
//		} else {
//			return 0;
//		}
//	}
//	int c = 0;
//	for(int i = 0; i < sau.length(); i++){
//		if(sau[i] >= 'a' && sau[i] <= 'z'|| sau[i] >= 'A' && sau[i] <= 'Z'|| sau[i] >= '0' && sau[i] <= '9'|| sau[i] == '_'||sau[i] == '.'){
//			if(sau[i] == '.'){
//				c++;
//			}
//			continue;
//		} else {
//			return 0;
//		}
//	}
//	if(c < 1) return 0;
//	return 1;
//}