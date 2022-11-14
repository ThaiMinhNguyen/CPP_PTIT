#include<bits/stdc++.h>

using namespace std;

struct Time{
	int h, m, s;
};

void nhap(Time a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i].h >> a[i].m >> a[i].s;
	}	
}

bool cmp(Time a, Time b)
{
    if(a.h > b.h) return 0;
    if(a.h < b.h) return 1;
    if(a.m > b.m) return 0;
    if(a.m < b.m) return 1;
    if(a.s > b.s) return 0;
    return 1;
}

void sapxep(Time a[], int n){
	sort(a, a+n, cmp);
}

void in(Time a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i].h << " " << a[i].m << " " << a[i].s << endl;
	}
}

int main(){
	int n;
	cin >> n;
	Time a[n];
	nhap(a, n);
	sapxep(a, n);
	in(a, n);
}