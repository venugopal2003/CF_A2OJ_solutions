#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	int size=s.size();
	unordered_map<char,int>hashh;
	for(int i=0;i<size;i+=2){
		hashh[s[i]]+=1;
	}
	string str="";
	for(int i=0;i<hashh['1'];i++){
		str+="1+";
		
	}
	for(int i=0;i<hashh['2'];i++){
		
		str+="2+";
	}
	for(int i=0;i<hashh['3'];i++){
		
		str+="3+";
	}
	str=str.substr(0,size);
cout<<str<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}