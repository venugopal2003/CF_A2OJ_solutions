#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

bool lucky(int n){
	int cnt1=0;
	int digi=log10(n)+1;
	while(n>0){
		int rem=n%10;
		if(rem==4 || rem==7){
			cnt1++;
		}
		n/=10;
	}
	if(cnt1==digi) return 1;
	return 0;
}

string solve(){
	int n;
	cin>>n;
	bool l=lucky(n);
	if(l==1) 
	return "YES";
	
	for(int i=4;i<n;i++){
		if(n%i==0 && lucky(i)){
			return "YES";
		}
	}
	

	return "NO";
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	cout<<solve()<<endl;
}