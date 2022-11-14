#include<bits/stdc++.h>

using namespace std;

int main(){
	ifstream fp1;
	ofstream fp2;
	fp1.open("PTIT.in");
	fp2.open("PTIT.out");
	while(!fp1.eof()){
		string s;
		getline(fp1, s);
		fp2 << s << endl;
	}
	fp1.close();
	fp2.close();
}