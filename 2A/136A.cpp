#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	int n;
	cin>>n;
	int arr[n];
	unordered_map<int,int>hashh;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		hashh[arr[i]]=i+1;
	}
	for(int i=1;i<=n;i++){
		cout<<hashh[i]<<" ";
	}


}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}