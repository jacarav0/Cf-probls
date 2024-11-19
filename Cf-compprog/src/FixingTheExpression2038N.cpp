#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;
	cin>>t;
	string input;
	while(t--){
		cin>>input;
		int a=input[0]-'0';
		int b=input[2]-'0';
		if(a>b){cout<<a<<'>'<<b<<'\n';}
		else if(a<b){cout<<a<<'<'<<b<<'\n';}
		else{cout<<a<<'='<<b<<'\n';}
}
	return 0;
}
