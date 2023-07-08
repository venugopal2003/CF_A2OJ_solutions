#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

	string s;
  	cin>>s;
	int cnt=0;
	string str="";
	int i=0;
	while(s.substr(i,3)=="WUB"){
		i+=3;
	}
	for(i;i<s.size();i++){

		if(s.substr(i,3)=="WUB"){
		while(s.substr(i,3)=="WUB"){
			i+=2;
			cnt++;
			if(cnt==1){
			str+=" ";
		
		}
	}
}

	else{
		str+=s[i];
		cnt=0;
		}

}
	cout<<str<<endl;
	
}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
	#endif
	
	solve();
}