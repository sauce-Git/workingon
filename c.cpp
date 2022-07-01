<<<<<<< HEAD
#include <bits/stdc++.h>
=======
#include <iostream>
#include <cmath>
>>>>>>> 2843aa1f9395a5fc51784ef18d76aa86c56c15b2
#define MAX 100000
#define NUM_MAX ~(1<<31)
using namespace std;

<<<<<<< HEAD
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
=======
bool DP[2][MAX];

int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int max_num = 1;
	bool is_empty[2];
	string s;
	cin >> s;
	DP[0][0]= 1;
	for(int i = 1; i < s.size(); i++) {
		DP[0][i] = 1;
		if(s[i-1] == s[i]) {
			DP[1][i] = 1;
			is_empty[1] = false;
			max_num = 2;
		}
	}

	for(int i = 2; i < s.size(); i++){
		is_empty[i%2] = true;
		for(int j = ceil((float)i/2); j < s.size() - i/2; j++){
			if(DP[i%2][j] && (s[j-(int)ceil((float)i/2)] == s[j+i/2])){
				DP[i%2][j] = 1;
				is_empty[i%2] = false;
			} else {
				DP[i%2][j] = 0;
			}
		}
		if(is_empty[0] & is_empty[1]) {
			break;
		}
		if(!is_empty[i%2]){
			max_num = i + 1;
		}
>>>>>>> 2843aa1f9395a5fc51784ef18d76aa86c56c15b2
	}

	cout << max_num;

	return 0;
}
