#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int q=0,w=0; //q are odd, w even
		cin>>n;
		for(long i=0;i<n;i++){
			long x;
			cin>>x;
			if (x%2==0){w++;}
					else{q++;}
		}

		 cout << (q + (w > 0 ? 1 : -1)) << endl;
	}


	return 0;
}
