#include<bits/stdc++.h>

using namespace std;

class SinhVien{
 public:
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
//	freopen("DATA.in", "r", stdin);
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
//  sort(ds, ds+n,cmp);
    int s;
    cin >> s;
    for(int j = 0; j < s; j++){
    	string r;
    	cin >> r;
    	cout << "DANH SACH SINH VIEN LOP " << r << ":" << endl;
    	for(int i=0;i<n;i++){
    		if(ds[i].lop == r){
    			cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].mail << endl;
			}
    	}
	}
    return 0;
}
