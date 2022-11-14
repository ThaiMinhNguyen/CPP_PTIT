#include<bits/stdc++.h>

using namespace std;

class SinhVien{
 public:
	string msv;
	string ten;
	string lop;
	string mail;
};

void to_upper(string &s){
	for(int i = 0; i < s.size(); i++){
		s[i] = toupper(s[i]);
	}
}

int main(){
//	freopen("DATA.in", "r", stdin);
	map<string,string> mp;
	mp["KE TOAN"] = "DCKT";
	mp["CONG NGHE THONG TIN"] = "DCCN";
	mp["AN TOAN THONG TIN"] = "DCAT";
	mp["VIEN THONG"] = "DCVT";
	mp["DIEN TU"] = "DCDT";
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
    int s;
    cin >> s;
    cin.ignore();
    for(int j = 0; j < s; j++){
    	string r;
    	getline(cin, r);
    	to_upper(r);
    	cout << "DANH SACH SINH VIEN NGANH " << r << ":" << endl;
    	for(int i=0;i<n;i++){
    		string ss;
			ss = ss + ds[i].msv[3] + ds[i].msv[4] + ds[i].msv[5] + ds[i].msv[6];
    		if(ss == mp[r]){
    			if((ss == "DCCN" || ss == "DCAT") && ds[i].lop[0] != 'E'){
    				cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].mail << endl;
				}
    			if(ss != "DCCN" && ss != "DCAT"){
    				cout << ds[i].msv << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].mail << endl;
				}
			}
    	}
	}
    return 0;
}
