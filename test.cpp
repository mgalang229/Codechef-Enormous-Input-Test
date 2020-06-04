#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k, t, cnt=0;
	cin >> n >> k;
	for(int i=0; i<n; ++i){
		cin >> t;
		if(t%k==0)
			cnt++;
	}
	cout << cnt << "\n";
	return 0;
}
