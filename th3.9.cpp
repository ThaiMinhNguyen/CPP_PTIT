#include<bits/stdc++.h>

#define KhoiNghiep kn

using namespace std;

struct KhoiNghiep{
	int stt;
	double chiase;
	double tt;
	double tong;
};

bool cmp(kn a, kn b){
	return a.tong > b.tong;
}

int main(){
	int t;
	cin >> t;
	kn a[t];
	for(int i = 0; i < t; i++){
		cin >> a[i].stt >> a[i].chiase >> a[i].tt;
		a[i].tong = (double) (a[i].chiase*0.7+a[i].tt*0.3);
	}
	sort(a, a+t, cmp);
	for(int i = 0; i < 7; i++){
		cout << a[i].stt << " ";
	}
}