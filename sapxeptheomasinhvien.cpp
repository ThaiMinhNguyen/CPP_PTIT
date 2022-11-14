#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv;
	string ten;
	string lop;
	string mail;
};

bool cmp(SinhVien a, SinhVien b){
	if (a.msv > b.msv){
		return 0;
	}
	return 1;
}

int main(){
    int i = 0;
    SinhVien ds[1000];
    while(cin >> ds[i].msv){
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
    	getline(cin, ds[i].mail);
    	i++;
    }
    sort(ds, ds + i, cmp);
    for(int j = 0; j < i; j++){
        cout << ds[j].msv << " " << ds[j].ten << " " << ds[j].lop << " " << ds[j].mail << endl;
    }
    return 0;
}
