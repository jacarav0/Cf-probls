#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
	int a1,a2,a4,a5,p1,p2,p3;
	cin>>a1>>a2>>a4>>a5;
	p1=a1+a2;
	p2=a4-a2;
	p3=a5-a4;
	if(p1==p2 && p2==p3){cout<<"3\n";}
	else if(p1==p2 ||p2==p3||p1==p3){cout<<"2\n";}
	else{cout<<"1\n";}

	}
return 0;
}
