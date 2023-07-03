#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	int n,m;
	cin>>n>>m;
	int mini=min(n,m);
	if(mini%2==0){
		cout<<"Malvika"<<endl;

	}
	else cout<<"Akshat"<<endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}