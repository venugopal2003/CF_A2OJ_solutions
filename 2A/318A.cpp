#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	ll n,k;
	cin>>n>>k;

	ll odd=0,even=0;

	if((n &1)==1){
		odd=(n/2)+1;
		even=(n/2);
	}
	else{
		odd=n/2;
		even=n/2;
	}

	ll val=0;

	if(k<=odd){

		val=1+(k-1)*2;
	}
	else{
		k=k-odd;

		val=2+(k-1)*2;

	}
	cout<<val<<endl;



}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}