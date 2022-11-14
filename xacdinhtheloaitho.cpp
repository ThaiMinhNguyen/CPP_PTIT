// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;

int demchu(string s){
	stringstream is(s);
	int c = 0;
	while(is >> s){
		c++;
	}
	return c;
}

int main(){
	int t;
	cin >> t;
	cin.ignore();
	vector<string> tho;
	vector<int> thutu;
	int count = 0;
	for(int i = 0; i < t;i++){
		string s;
		getline(cin, s);
		tho.push_back(s);
	}
	int i = 0;
	while(i < t){
		if(demchu(tho[i]) == 6){
			count++;
			thutu.push_back(1);
			while(i < t){
				if(demchu(tho[i]) == 6){
					i+=2;
				}
				else {
					break;
				}
			}
		} else {
			count++;
			thutu.push_back(2);
			i+=4;
		}
	}
	cout << count << endl;
	for(int j = 0; j < thutu.size(); j++){
		cout << thutu[j] << endl;
	}
}