#include<bits/stdc++.h>

using namespace std;

class Dn{
 public:
	string ma;
	string ten;
	int so;
};

bool cmp(Dn a, Dn b){
	if(a.so==b.so) return a.ma < b.ma;
	return a.so > b.so;
}

int main(){
//	freopen("DATA.in", "r", stdin);
	int n;
	cin >> n;
	cin.ignore();
	Dn a[n];
	for(int i = 0; i < n; i++){
		getline(cin, a[i].ma);
		getline(cin, a[i].ten);
		cin >> a[i].so;
		cin.ignore();
	}
	sort(a, a+n, cmp);
	for(int i =0; i < n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].so << endl;
	}
}