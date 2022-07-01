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
	int x = 0, y = 0;
	int s = 0;
	int v_size = v.size();
	int e = v.size();
	int min_num = NUM_MAX;
	while(s < e){
		a = v[s] + v[e];
	}
	return 0;
}
