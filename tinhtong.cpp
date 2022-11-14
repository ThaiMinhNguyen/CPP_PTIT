#include<bits/stdc++.h>

using namespace std;

//bool check(long long i){
//	if(i <= INT_MAX){
//		return 1;
//	}
//	return 0;
//}

long long doi(string s){
	long long n = 0;
	for(int i = 0; i < s.size(); i++){
		if(isdigit(s[i])){
			n = n*10 + (s[i]-'0');
			if(n>INT_MAX){
				return 0;
			}
		} else {
			return 0;
		}
	}
	return n;
}

int main(){
	ifstream f1;
	f1.open("DATA.in");
	string s;
	long long n = 0;
	long long sum = 0;
	while(f1 >> s){
		n = doi(s);
		sum += n;
	}
	cout << sum;
}