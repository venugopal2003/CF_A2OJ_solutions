#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

void solve(){

int arr[5][5];
int ind_i=-1,ind_j=-1;
for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
		cin>>arr[i][j];
		if(arr[i][j]==1){
			ind_i=i;
			ind_j=j;
		}
	}
}
int res=abs(ind_i-2)+abs((ind_j-2));
cout<<res<<endl;


}

int main(){

	solve();
}