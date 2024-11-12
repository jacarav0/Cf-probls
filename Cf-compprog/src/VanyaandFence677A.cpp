#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,c=0,k,w;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>w;
		if(w>k) c++;
	}
	cout<<c+n;
	return 0;
}
