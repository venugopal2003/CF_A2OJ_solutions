#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back


void solve(){

	int n,m;
	cin>>n>>m;

	int arr[m];

	for(int i=0;i<m;i++){
		cin>>arr[i];
	}
	int diff=INT_MAX;

	int i=0,j=n-1;

	sort(arr,arr+m);

	while(i<m && j<m){

		diff=min(diff,(arr[j]-arr[i]));
		i++;
		j++;

	}
	cout<<diff<<endl;



}
		



int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}