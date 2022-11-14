#include<bits/stdc++.h>

using namespace std;

void to_lower(string &s){
	for(int i=0; i < s.length();i++){
		s[i] = tolower(s[i]);
	}
}

void ten(string &s){
	string res;
	to_lower(s);
	stringstream is(s);
	while(is >> s){
		s[0] = toupper(s[0]);
		if(res == ""){
			res += s;
		} else {
			res = res + " " + s;
		}
	}
	s = res;
}

string chuanhoa(string s){
	string res;
	string m;
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '/'){
			m += s[i];
		}
		if(s[i] == '/' ){
			if(m.size() == 1){
				m = "0" + m;
			}
			res = res + m + "/";
			m = "";
		}
		if(i == s.size()-1){
			res = res + m;
		}
	}
	return res;
}

struct SinhVien{
	string msv;
	string name;
	string lop;
	string ngaysinh;
	float diem;
};

bool cmp(SinhVien a, SinhVien b){
	return a.diem > b.diem;
}

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		a[i].msv = "B20DCCN0";
		if(i < 9){
			a[i].msv = a[i].msv + "0" + to_string(i+1);
		} else {
			a[i].msv = a[i].msv + to_string(i+1);
		}
		cin.ignore();
		getline(cin, a[i].name);
		ten(a[i].name);
		cin >> a[i].lop;
		cin >> a[i].ngaysinh;
		a[i].ngaysinh = chuanhoa(a[i].ngaysinh);
		cin >> a[i].diem;
	}
}

void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}

void in(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << a[i].ngaysinh << " " << setprecision(2) << fixed << a[i].diem << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}