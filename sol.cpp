#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[1000], n , h, t = 0;
	cin >> n >> h;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		if(a[i] <= h){
			t++;
		} else{
			t += 2;
		}
	}
	cout << t << "\n";
	return 0;
}
