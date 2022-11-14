#include<bits/stdc++.h>

using namespace std;

class Gv{
	public:
		string ma;
		string ten;
		string mon;
		string tencuoi;
};

void to_upper(string &s){
	for(int i =0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

int Search(string a, string b){
	to_upper(a);
	to_upper(b);
	int n = a.size();
	int m = b.size();
	for(int i = 0;i <= n-m; i++){
		int j;
		int check = 1;
		for(j = 0; j < m; j++){
			if(a[i+j]!=b[j]){
				check = 0; break;
			}
		}
		if(check == 1) return 1;
	}
	return -1;
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
	int s;
	cin >> s;
	cin.ignore();
	for(int j = 0; j < s; j++){
		string res;
		getline(cin, res);
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << res << ":" << endl;
		for(int i = 0; i < n; i++){
			if(Search(a[i].ten, res) == 1)
			cout << a[i].ma << " " << a[i].ten << " " << a[i].mon << endl;
		}
	}
	
}

//int main(){
//	string a = "Nguyen Thai Minh";
//	string b = "In";
//	cout << Search(a, b);
//}