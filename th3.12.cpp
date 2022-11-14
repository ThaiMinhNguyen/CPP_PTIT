#include<bits/stdc++.h>

using namespace std;

struct Nguoi{
	string ngay;
	string name;
	string std;
	string ten;
	string dem;
};

bool cmp(Nguoi a, Nguoi b){
	if(a.ten != b.ten) return a.ten < b.ten;
	else return a.dem < b.dem;
}

int main(){
	ifstream f1;
	ofstream f2;
	f1.open("SOTAY.txt");
	f2.open("DIENTHOAI.txt");
	int i = -1;
	Nguoi a[100];
	while(!f1.eof()){
		i++;
		string s = "";
		getline(f1, s);
		stringstream is(s);
		while(is >> s){
			a[i].ngay = s;
		}
		cout << a[i].ngay << endl;
		getline(f1, a[i].name);
		string m = a[i].name;
		stringstream ss(m);
		vector<string> r;
		while(ss >> m){
			r.push_back(m);
		}
		a[i].ten = r[r.size()-1];
		a[i].dem = r[r.size()-2];
		f1 >> a[i].std;
		f1.ignore();
	}
	sort(a, a+i, cmp);
	for(int j = 0; j < i; j++){
		f2 << a[j].name << ": " << a[j].std << " " << a[j].ngay << endl;
	}
	f1.close();
	f2.close();
}