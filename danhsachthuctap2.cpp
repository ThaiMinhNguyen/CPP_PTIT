#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	int stt;
	string msv;
	string name;
	string lop;
	string mail;
	string doanhnghiep;
};

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv;
}

void nhap(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		a[i].stt = i+1;
		cin.ignore();
		getline(cin, a[i].msv);
		getline(cin, a[i].name);
		cin >> a[i].lop;
		cin >> a[i].mail;
		cin >> a[i].doanhnghiep;
	}
}

void sapxep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}

void in(SinhVien a[], int n, string s){
	for(int i = 0; i < n; i++){
		if(a[i].doanhnghiep == s){
			cout << a[i].stt << " " << a[i].msv << " " << a[i].name << " " << a[i].lop << " " << a[i].mail << " " << a[i].doanhnghiep << endl;
		}
	}
}

int main(){
//	freopen("DATA.in", "r", stdin);
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
    	string s;
    	cin >> s;
    	in(ds, N, s);
	}
    return 0;
}