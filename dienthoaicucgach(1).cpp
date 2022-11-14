#include<bits/stdc++.h>

using namespace std;

//string doi(string s){
//	string res;
//	for(int i = 0;i < s.length(); i++){
//		if(s[i] == 'A' || s[i] == 'a'){
//			res += "2";
//		}
//		if(s[i] == 'b' || s[i] == 'B'){
//			res += "22";
//		}
//		if(s[i] == 'c' || s[i] == 'C'){
//			res += "222";
//		}
//		if(s[i] == 'D' || s[i] == 'd'){
//			res += "3";
//		}
//		if(s[i] == 'E' || s[i] == 'e'){
//			res += "33";
//		}
//		if(s[i] == 'F' || s[i] == 'f'){
//			res += "333";
//		}
//		if(s[i] == 'g' || s[i] == 'G'){
//			res += "4";
//		}
//		if(s[i] == 'H' || s[i] == 'h'){
//			res += "44";
//		}
//		if(s[i] == 'i' || s[i] == 'I'){
//			res += "444";
//		}
//		if(s[i] == 'J' || s[i] == 'j'){
//			res += "5";
//		}
//		if(s[i] == 'K' || s[i] == 'k'){
//			res += "55";
//		}
//		if(s[i] == 'l' || s[i] == 'L'){
//			res += "555";
//		}
//		if(s[i] == 'm' || s[i] == 'M'){
//			res += "6";
//		}
//		if(s[i] == 'N' || s[i] == 'n'){
//			res += "66";
//		}
//		if(s[i] == 'O' || s[i] == 'o'){
//			res += "666";
//		}
//		if(s[i] == 'P' || s[i] == 'p'){
//			res += "7";
//		}
//		if(s[i] == 'Q' || s[i] == 'q'){
//			res += "77";
//		}
//		if(s[i] == 'R' || s[i] == 'r'){
//			res += "777";
//		}
//		if(s[i] == 'S' || s[i] == 's'){
//			res += "7777";
//		}
//		if(s[i] == 'T' || s[i] == 't'){
//			res += "8";
//		}
//		if(s[i] == 'U' || s[i] == 'u'){
//			res += "88";
//		}
//		if(s[i] == 'v' || s[i] == 'V'){
//			res += "888";
//		}
//		if(s[i] == 'w' || s[i] == 'W'){
//			res += "9";
//		}
//		if(s[i] == 'x' || s[i] == 'X'){
//			res += "99";
//		}
//		if(s[i] == 'Y' || s[i] == 'y'){
//			res += "999";
//		}
//		if(s[i] == 'Z' || s[i] == 'z'){
//			res += "9999";
//		}
//	}
//	return res;
//}

void to_upper(string &s){
	for(int i = 0; i < s.length(); i++){
		s[i] = toupper(s[i]);
	}	
}

bool check1(string s){
	int check = 1;
	for(int i = 0; i < s.length()/2; i++){
		if(s[i]!=s[s.length()-i-1]){
			check = 0;
			break;
		}
	}
	return check;
}

int main(){
	string d[] = {"2", "2", "2", "3", "3", "3", "4", "4", "4", "5", "5", "5", "6", "6", "6", "7", "7", "7", "7", "8", "8", "8", "9", "9", "9", "9"};
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res;
		to_upper(s);
		for(int i =0;i < s.length();i++){
			res+= d[s[i] - 'A'];
		}
		if(check1(res) == 1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}