#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
int n;
string s;
cin>>n>>s;
int stones=0;
for(int i=0;i<s.size()-1;i++){
	if(s[i]==s[i+1]) stones++;
}
cout<<stones<<endl;
}

int main(){

	solve();
}