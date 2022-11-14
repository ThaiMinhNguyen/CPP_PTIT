#include<bits/stdc++.h>

using namespace std;

struct Nguoi{
	string name;
	string ngaysinh;
	string y, d, m;
};

bool cmp(Nguoi a, Nguoi b){
	if(a.y > b.y) return 1;
	if(a.y < b.y) return 0;
	if(a.m > b.m) return 1;
	if(a.m < b.m) return 0;
	if(a.d > b.d) return 1;
	if(a.d < b.d) return 0;
}

void nhap(Nguoi a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i].name >> a[i].ngaysinh;
		stringstream is(a[i].ngaysinh);
		getline(is, a[i].d, '/');
		getline(is, a[i].m, '/');
		getline(is, a[i].y, '/');
	}
}

void sapxep(Nguoi a[], int n){
	sort(a, a+n, cmp);
}

void in(Nguoi a[], int n){
	cout << a[0].name << endl << a[n-1].name;
}

int main(){
//	freopen("DATA.in", "r", stdin);
	int n;
	cin >> n;
	Nguoi a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
}