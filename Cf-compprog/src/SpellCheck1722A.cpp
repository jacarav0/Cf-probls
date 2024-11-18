
#include <bits/stdc++.h>
using namespace std;

int main(){
	long t,n;
	cin>>t;
	string tar = "Timur";
	sort(tar.begin(), tar.end());
	while(t--){

		cin>>n;

		string s;
		cin>>s;
		sort(s.begin(),s.end());
		if(tar==s){cout<<"YES\n";}
		else{cout<<"NO\n";}

	}
	return 0;
}
