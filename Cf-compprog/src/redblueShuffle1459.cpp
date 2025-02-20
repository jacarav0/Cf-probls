#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	int T,n;
	cin>>T;
	while(T--){
		string red="";
		string blue="";
		cin>>n;
		int r[n],b[n];
		int c1=0,c2=0;

		cin>>red;
		cin>>blue;
		for(int i=0;i<n;i++){
			r[i]=red[i];
			b[i]=blue[i];
		}
		//sort(b,b+n);
		//sort(r,r+n);
		for(int i=0;i<n;i++){
			if(r[i]>b[i]){c1++;}
			else if(r[i]<b[i]){c2++;}
		}
		if(c2>c1){cout<<"BLUE\n";}
		else if(c1>c2){cout<<"RED\n";}
		else{cout<<"EQUAL\n";}
		}

	return 0;
}
