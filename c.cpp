#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n, a, b;
	vector<pair<int, int>> v;
	cin >> n;
	while(n--){
		cin >> a >> b;
		v.push_back(make_pair(a, b));
		sort(v.begin(), v.end(), less<>());
	}
	for(int i = 0; i < v.size(); i++){
		cout << v[i].first << " " << v[i].second << "\n";
	}
	return 0;
}
