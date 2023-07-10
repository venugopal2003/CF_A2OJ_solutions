#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	int n;
	cin>>n;

	if(n>=0) cout<<n<<endl;
	else{

		int val1=n/10;

		int rem=n%10;

		int val2=(n/100)*10+rem;

		cout<<max(val1,val2)<<endl;

	}

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}