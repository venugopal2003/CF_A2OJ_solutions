#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	string s;
	getline(cin,s);

	unordered_map<char,int> hashh;

	for(int i=1;i<s.size()-1;i+=3){
		if(isalpha(s[i])){
		hashh[s[i]]++;
	}
	}
	cout<<hashh.size()<<endl;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}