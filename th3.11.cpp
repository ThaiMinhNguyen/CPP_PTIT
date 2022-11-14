#include<bits/stdc++.h>

using namespace std;

int doi(string s){
	int res = 0;
	for(int i = 0; i < s.size(); i++){
		res = res*10 + (int)(s[i]-'0');
	}
	return res;
}

struct TheLoai{
	int stt;
	string sott;
	string loai;
};

struct Phim{
	string so;
	string gen1;
	string gen2;
	string ngay;
	string d, m ,y;
	string sophim;
	int tap;
};

bool cmp(Phim a, Phim b){
	if(a.y != b.y)return a.y < b.y;
	else if(a.m != b.m)return a.m < b.m;
	else if(a.d != b.d)return a.d < b.d;
	else return a.sophim < b.sophim;
//	return a.tap > b.tap;
}

int main(){
//	freopen("Da.in", "r", stdin);
	int n, t;
	cin >> n >> t;
	TheLoai a[n];
	Phim b[t];
	cin.ignore();
	for(int i = 0; i < n; i++){
		a[i].stt = i+1;
		getline(cin, a[i].loai);
	}
	for(int i = 0; i < t; i++){
		if(i < 9){
			b[i].so = "P00" + to_string(i+1);
		}
		else if(i < 99){
			b[i].so = "P0" + to_string(i+1);
		}
		else{
			b[i].so = "P" + to_string(i+1);
		}
		cin >> b[i].gen1;
//		cout << b[i].gen1 << endl;
		string s = "";
		s = s + b[i].gen1[2] + b[i].gen1[3] + b[i].gen1[4];
//		cout << s << endl;
		int k = doi(s);
//		cout << k << endl;
		b[i].gen2 = a[k-1].loai;
		cin >> b[i].ngay;
		stringstream is(b[i].ngay);
		getline(is, b[i].d , '/');
		getline(is, b[i].m , '/');
		getline(is, b[i].y , '/');
		cin.ignore();
		getline(cin, b[i].sophim);
		cin >> b[i].tap;
	}
	sort(b, b+t, cmp);
	for(int i = 0; i < t; i++){
		cout << b[i].so << " " << b[i].gen2 << " " << b[i].ngay << " " << b[i].sophim << " " << b[i].tap << endl;
	}
}