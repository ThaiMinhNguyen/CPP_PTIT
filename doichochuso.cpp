#include<bits/stdc++.h>

using namespace std;

string doi(string s){
	int index = -1;
		int len = s.length();
		for(int i = len - 2; i >= 0; i--){
			if(s[i] > s[i+1]){
				index = i; 
				break;
			}
		}
		int index_to_swap = -1;
		for(int i = len-1; i > index; i--){
			if(s[i] < s[index]){
				if(index_to_swap == -1){
					index_to_swap = i;
				}
				else if(s[i] >= s[index_to_swap]){
					index_to_swap = i;
				}
			}	
		}
		if(index == -1){
			return "-1";
		}
	
		if(index_to_swap != -1){
			swap(s[index],s[index_to_swap]);
			return s;
		}
		return "-1";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << doi(s) << endl;
	}
}