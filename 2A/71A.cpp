#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	int n;
	cin>>n;
	vector<string>str;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		str.push_back(s);
	}
	for(auto s:str){
		int siz=s.size();
		if(siz<=10){
			cout<<s<<endl;
		}
		else{
			cout<<s[0]<<siz-2<<s[siz-1]<<endl;
		}
	}
}

int main(){

	solve();
}