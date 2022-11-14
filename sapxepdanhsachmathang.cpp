#include<bits/stdc++.h>

using namespace std;

struct Hang{
	int ma;
	string ten;
	string nhom;
	double giamua;
	double giaban;
	double loinhuan;
};

bool cmp(Hang a, Hang b){
	return a.loinhuan > b.loinhuan;
}

void nhap(Hang a[], int n){
	for(int i = 0; i < n; i++){
		a[i].ma=i+1;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].giamua >> a[i].giaban;
		a[i].loinhuan = a[i].giaban-a[i].giamua;
	}
}

void in(Hang a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << setprecision(2) << fixed << a[i].loinhuan << endl;
	}
}

void sapxep(Hang a[], int n){
	sort(a, a+n, cmp);
}

int main(){
	int n;
	cin >> n;
	Hang a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
}