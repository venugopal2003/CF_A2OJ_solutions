#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
int solve(){
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(tolower(s1[i])>tolower(s2[i])) return 1;
		else if(tolower(s1[i])<tolower(s2[i])) return -1;
	}
	return 0;

}

int main(){

	cout<<solve()<<endl;
}