#include <bits/stdc++.h>
using namespace std;
int main(){
	long n,m,a;
	cin>>n>>m>>a;
    cout << (long long)(ceil(static_cast<double>(n) / a) * ceil(static_cast<double>(m) / a)) << endl;
	return 0;
}
