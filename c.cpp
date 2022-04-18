#include <iostream>
#include <cmath>
#define MAX 100000
using namespace std;

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
	}

	cout << max_num;

	return 0;
}
