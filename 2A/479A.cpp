#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	int a,b,c;
	cin>>a>>b>>c;

	int maxi=max((a+b+c),a*b*c);

	maxi=max(maxi,a+(b*c));
	maxi=max(maxi,(a*b)+c);
	maxi=max(maxi,a*(b+c));
	maxi=max(maxi,(a+b)*c);
	cout<<maxi<<endl;

	
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}