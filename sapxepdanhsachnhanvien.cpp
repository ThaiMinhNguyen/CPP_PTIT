#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	int manv;
	string ten;
	string gioitinh;
	string ngaysinh;
	string d;
	string m;
	string y;
	string diachi;
	string masothue;
	string ngayki;
};

#define nv NhanVien

bool cmp(nv &a, nv &b)
{
    if(a.y > b.y) return 0;
    if(a.y < b.y) return 1;
    if(a.m > b.m) return 0;
    if(a.m < b.m) return 1;
    if(a.d > b.d) return 0;
    return 1;
}


int cnt = 0;
void nhap(NhanVien &a){
	cnt++;
	a.manv = cnt;
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gioitinh;
	cin >> a.ngaysinh;
	stringstream ss(a.ngaysinh);
	getline(ss, a.m, '/');
    getline(ss, a.d, '/');
    getline(ss, a.y, '/');
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.masothue;
	cin >> a.ngayki;
}

void inds(NhanVien a[], int n){
	for(int i = 0; i < n; i++){
		cout << setw(5) << setfill('0') << a[i].manv << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].masothue << " " << a[i].ngayki << endl;
	}
}

void sapxep(NhanVien a[], int n){
	sort(a, a+n, cmp);
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}