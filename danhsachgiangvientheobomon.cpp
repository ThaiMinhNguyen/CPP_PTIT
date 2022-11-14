#include<bits/stdc++.h>

using namespace std;

class Gv{
	public:
		string ma;
		string ten;
		string mon;
		string tencuoi;
};

bool cmp(Gv a, Gv b){
	if(a.tencuoi == b.tencuoi) return a.ma < b.ma;
	return a.tencuoi < b.tencuoi;
}

void doi(string &s){
	string res;
	stringstream is(s);
	while(is >> s){
		res += toupper(s[0]);
	}
	s = res;
}

int main(){
//	freopen("DATA.in", "r", stdin);
	int n;
	cin >> n;
	Gv a[n];
	cin.ignore();
	for(int i = 0;i < n; i++){
		string t;
		if(i < 9){
			a[i].ma = "GV0" + to_string(i+1);
		} else {
			a[i].ma = "GV" + to_string(i+1);	
		}
		getline(cin, t);
		a[i].ten = t;
		stringstream is(t);
		while(is >> t){
			a[i].tencuoi = t;
		}
		while(is >> a[i].ten){
			
		}
		getline(cin, a[i].mon);
		doi(a[i].mon);
	}
//	sort(a, a+n, cmp);
	int s;
	cin >> s;
	cin.ignore();
	for(int j = 0; j < s; j++){
		string res;
		getline(cin, res);
		doi(res);
		cout << "DANH SACH GIANG VIEN BO MON " << res << ":" << endl;
		for(int i = 0; i < n; i++){
			if(a[i].mon==res)
			cout << a[i].ma << " " << a[i].ten << " " << a[i].mon << endl;
		}
	}
	
}