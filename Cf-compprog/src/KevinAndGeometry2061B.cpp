#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	while(t--){
		int n;
		bool w1=false;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n-3;i++){
			if(arr[i]==arr[i+1]&&i<n-2){w1=true;cout<<arr[i]<<" "<<arr[i+1]<<" "<<arr[i+2]<<" "<<arr[i+3]<<"\n";}
		}
		if(!w1){cout<<"-1\n";}
	}

	return 0;

}
