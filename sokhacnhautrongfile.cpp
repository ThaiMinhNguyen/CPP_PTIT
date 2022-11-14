#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream f1;
	f1.open("DATA.in");
//	vector<int> v;
	map<int, int> m;
	set<int> l;
	int s;
	while(f1 >> s){
		l.insert(s);
		m[s]++;
	}
	for(auto x:l){
		cout << x << " " << m[x] << endl;
	}
	f1.close();
}