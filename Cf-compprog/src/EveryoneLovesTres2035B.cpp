#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	cin>> t;
	while(t--){
		cin>>n;
		if(n==1||n==3){
			cout<<"-1\n";
		}
		else if(n%2){
			for(int i=0;i<n-2;i++){
				cout<<"3";
			}
			cout<<"66\n";
		}
		else{
			for(int i=0;i<n-5;i++){
				cout<<"3";
			}
			cout<<"36366\n";
		}
	}


}
