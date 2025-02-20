#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int cnt[7]={};
		for(int i=0;i<n;i++){
			char c;cin>>c;
			cnt[c-'A']++;
		}
		int ans=0;
		for(int i=0;i<7;i++){
			if(cnt[i]<m){ans+=m-cnt[i];}
		}
		cout<<ans<<"\n";
	}


	return 0;
}
