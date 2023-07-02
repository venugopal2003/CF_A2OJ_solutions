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
	sort(arr,arr+n);
	int left_sum=0;
	for(int i=0;i<n;i++){
		left_sum+=arr[i];
	}
	int right_sum=0;
	int coins=0;
	for(int i=0;i<n;i++){
		if(left_sum<right_sum){
			break;
		}
		else{
			right_sum+=arr[n-1-i];
			left_sum-=arr[n-1-i];
			coins++;
		}
	}
	cout<<coins;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}