#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	string s;
	cin>>s;

	int h=-1,e=-1,l1=-1,l2=-1,o=-1;

	for(int i=0;i<s.size();i++){
		if(s[i]=='h'){
			h=i;
			break;
		}
	}

	for(int i=h;i<s.size();i++){
		if(s[i]=='e'){
			e=i;
			break;
		}
	}

	for(int i=e;i<s.size();i++){
		if(s[i]=='l'){
			l1=i;
			break;
		}
	}

	for(int i=l1+1;i<s.size();i++){
		if(s[i]=='l'){
			l2=i;
			break;
		}
	}

	for(int i=l2;i<s.size();i++){
		if(s[i]=='o'){
			o=i;
			break;
		}
	}

	if(h!=-1 && e!=-1 && l1!=-1 && l2!=-1 && o!=-1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}