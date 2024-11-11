#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
int t,n;
cin>>t;
while(t--){
	cin>>n;
	bool v=true;
	int w=0,arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		w=arr[i]-arr[i+1];
		if(abs(w)!=7 &&abs(w)!=5){
			v=false;
			break;

		}
	}
		if(v){
		cout<<"yes\n";
		}
		else{
			cout<<"no\n";
		}


}
return 0;
}

