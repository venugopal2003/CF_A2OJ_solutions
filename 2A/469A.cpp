#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

string solve(){

	int n;
	cin>>n;

	int p;
	cin>>p;
	int arr1[p];
	for(int i=0;i<p;i++){
		cin>>arr1[i];
	}
	int q;
	cin>>q;
	int arr2[q];

	for(int i=0;i<q;i++){
		cin>>arr2[i];
	}

	unordered_map<int,int>hashh;

	for(int i=0;i<p;i++){
		hashh[arr1[i]]=1;

	}
	for(int i=0;i<q;i++){
		hashh[arr2[i]]=1;

	}

	for(int i=1;i<=n;i++){
		if(hashh[i]!=1) return "Oh, my keyboard!";
	}
	return "I become the guy.";

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	cout<<solve()<<endl;
}