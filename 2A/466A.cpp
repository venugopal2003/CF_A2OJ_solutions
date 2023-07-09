#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	int n,m,a,b;
	cin>>n>>m>>a>>b;

	int cost=0;
	if(m==n){
		cost=min(b,n*a);

	}
	else if(m<n){

		int m_ride=n/m;
		int rem=n%m;
		cost=m_ride*b;
		cost+=min(rem*a,b);
		cost=min(cost,n*a);
	}
	else{

		cost=min(n*a,b);
	}
	cout<<cost<<endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}