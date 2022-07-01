#include <bits/stdc++.h>
#define MAX 100000
#define NUM_MAX ~(1<<31)
using namespace std;

typedef long long ll;

vector<ll> v;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	int x, y;
	int s = 0;
	int v_size = v.size();
	int e = v.size() - 1;
	int min_num = NUM_MAX;
	while(s < e){
		a = abs(v[s] + v[e]);
		if(a < min_num) {
			min_num = a;
			x = v[s];
			y = v[e];
		}
		if(s + 1 < e && abs(v[s+1] + v[e]) < min_num) {
			s++;
			continue;
		} else if(s < e - 1 && abs(v[s] + v[e-1]) < min_num) {
			e--;
			continue;
		} else {
			s++;
			e--;
			continue;
		}
	}
	cout << x << " " << y;
	return 0;
}
