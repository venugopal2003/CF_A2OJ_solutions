#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	
	int n;
	cin>>n;
	int arr[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				continue;
			}
			else{
				if(arr[i][0]==arr[j][1]) cnt++;
			}
		}
	}
	cout<<cnt;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}