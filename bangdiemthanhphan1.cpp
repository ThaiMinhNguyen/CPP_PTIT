#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv;
	string name;
	string lop;
	float diem1;
	float diem2;
	float diem3;
};

bool cmp(SinhVien a, SinhVien b){
	return a.msv < b.msv ;
}

void nhap(SinhVien &s){
	cin.ignore();
	getline(cin , s.msv);
	getline(cin , s.name);
	cin >> s.lop >> s.diem1 >> s.diem2 >> s.diem3 ;
}

void sap_xep(SinhVien a[], int n){
	sort(a, a+n, cmp);
}

void in_ds(SinhVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << i+1 << " " <<  a[i].msv << " " << a[i].name << " " << a[i].lop << " " << setprecision(1) << fixed << a[i].diem1 << " " << a[i].diem2 << " " << a[i].diem3 << endl;
	}
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}