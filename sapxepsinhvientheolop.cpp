#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv;
	string ten;
	string lop;
	string mail;
};

bool cmp(SinhVien a, SinhVien b){
	if (a.lop > b.lop){
		return 0;
	}
	if (a.lop < b.lop){
		return 1;
	}
	if (a.msv > b.msv){
		return 0;
	}
	return 1;
}

int main(){
    int n;
    cin >> n;
    SinhVien ds[n];
    cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, ds[i].msv);
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
    	getline(cin, ds[i].mail);
    }
    sort(ds, ds+n,cmp);
    for(int i=0;i<n;i++){
        cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].mail << endl;
    }
    return 0;
}
