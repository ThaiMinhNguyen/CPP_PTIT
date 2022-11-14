#include<bits/stdc++.h>
// #include<iostream>

using namespace std;

struct Ti{
	int stt;
	double danhgia;
};

bool sosanh(Ti a, Ti b){
	return a.danhgia>b.danhgia;
}

int main(){
	int t;
	cin >> t;
	Ti s[t];
	for(int i = 0; i < t; i++){
		double a, b;
		s[i].stt = i+1;
		cin >> a >> b;
		s.danhgia = 0.7*a+0.3*b;
	}
	sort(s, s+t, sosanh);
	for(int i = 0; i < t; i++){
		cout << s[i].stt << " ";
	}
}