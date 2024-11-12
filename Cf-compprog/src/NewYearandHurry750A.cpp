#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,q=0,ans=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		q+=5*i;
		if(q>240-k) break;
		ans+=1;
	}
	cout<<ans;
	//240 minutes -k
	return 0;
}
