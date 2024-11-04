#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int t,n,pt;
	double avg;
	cin>>t;
	while(t--){
		int total=0;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
			total+=arr[i];
		}
		sort(arr,n);
		avg=total/n;
		for(int i=0;i<n;i++){
			if(arr[i]>avg){
				pt=arr[i];
			}
		}
		if(<static_cast>(double)pt>=n/2){
			cout<<0<<"\n";
		}else if(){

		}


	}



}
