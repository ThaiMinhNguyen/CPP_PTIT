#include <iostream>
 using namespace std; 
 int check(long long n){ if (n<2) return n; long long f0=0; long long f1=1; for (int i=2;i<=92;i++){ long long fn=f0+f1; if (fn==n) return 1; f0=f1; f1=fn; } return -1; } int main(){ int t; cin>>t; while(t--){ long long n; cin>>n; if (check(n)!=-1){ cout<<"YES\n"; } else { cout<<"NO\n"; } } return 0; }