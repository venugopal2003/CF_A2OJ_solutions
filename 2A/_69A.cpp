#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

int n;
cin>>n;
int X[n],Y[n],Z[n];
int sum1=0,sum2=0,sum3=0;
for(int i=0;i<n;i++){
	for(int j=0;j<3;j++){
		if(j==0){
			cin>>X[j];
			sum1+=X[j];
		}
		else if(j==1){
			cin>>Y[j];
			sum2+=Y[j];
		}
		else{
			cin>>Z[j];
			sum3+=Z[j];
		}
	}
}

if(sum1==0 && sum2==0 && sum3==0) cout<<"YES\n";
else cout<<"NO\n";


}

int main(){
	solve();
}