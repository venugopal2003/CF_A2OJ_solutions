#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	string s;
	cin>>s;
	string str="";
	for(int i=0;i<s.size();i++){
		if(tolower(s[i])=='a'||tolower(s[i])=='e'||tolower(s[i])=='i'||tolower(s[i])=='o'||tolower(s[i])=='y'||tolower(s[i])=='u'){

		}
		else{
			str+='.';
			str+=tolower(s[i]);
		}
	}
	cout<<str<<endl;
}

int main(){

	solve();
}