#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
	int w;
	 for(int i=0;i<5;i++){
		 for(int j=0;j<5;j++){
			 cin>>w;
			 if(w==1){
				 cout<<(abs(3-j-1)+abs(3-i-1));
				 return 0;
			 }
		 }


	 }
}
