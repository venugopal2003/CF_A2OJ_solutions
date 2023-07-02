#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	int maxi=INT_MIN,mini=INT_MAX;
	int max_ind=-1,min_ind=-1;
	for(int i=0;i<n;i++){
		if(arr[i]>maxi){
			maxi=arr[i];
			max_ind=i;
		}
		if(arr[i]<=mini){
			mini=arr[i];
			min_ind=i;
		}
	}
	int dis=(max_ind-0)+(n-1-min_ind);
	if(max_ind>min_ind) dis--;
	cout<<dis<<endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}