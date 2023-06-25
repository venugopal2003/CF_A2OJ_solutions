#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){
	string a,b;
	cin>>a>>b;
	string str="";
	for(int i=0;i<a.size();i++){
		if(a[i]!=b[i]){
			str+='1';
		}
		else{
			str+='0';
		}
	}
	cout<<str<<endl;

}

int main(){

	solve();
}