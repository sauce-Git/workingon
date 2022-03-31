#include <iostream>
#include <queue>
#define MAX 100000
using namespace std;

int arr[MAX * 2] = {0, };
queue<int> q;

int main(){
	int n, k;
	int max_dist = MAX;
	cin >> n >> k;
	q.push(n);
	while(!q.empty()){
		n = q.front();
		q.pop();
		if(arr[n] < max_dist){
			if(arr[n+1] == 0 || (arr[n+1] > arr[n] + 1)) arr[n+1] = arr[n] + 1;
			if(arr[n-1] == 0 || (arr[n-1] > arr[n] + 1)) arr[n-1] = arr[n] + 1;
			if(arr[2 * n] == 0 || (arr[2 * n] > arr[n] + 1)) arr[2 * n] = arr[n] + 1;

			if(abs(k - (n+1)) < max_dist) max_dist = abs(k - (n+1));
			if(abs(k - 2*n) < max_dist) max_dist = abs(k - 2*n);
		}
	}
	return 0;
}
