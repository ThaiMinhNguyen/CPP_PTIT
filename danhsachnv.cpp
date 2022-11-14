#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
	string ten;
	string gioitinh;
	string ngaysinh;
	string diachi;
	string masothue;
	string ngayki;
};

void nhap(NhanVien &a){
	cin.ignore();
	getline(cin, a.ten);
	cin >> a.gioitinh;
	cin >> a.ngaysinh;
	cin.ignore();
	getline(cin, a.diachi);
	cin >> a.masothue;
	cin >> a.ngayki;
}

void inds(NhanVien a[], int n){
	for(int i = 0 ; i < n; i++){
		cout << setw(5) << setfill('0') << i+1 << " " << a[i].ten << " " << a[i].gioitinh << " " << a[i].ngaysinh << " " << a[i].diachi << " " << a[i].masothue << " " << a[i].ngayki << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}