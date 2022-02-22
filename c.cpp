#include <iostream>
using namespace std;
const int MAX = 1000;

int S[MAX][MAX];
int ans[3] = {0, };

int qtree(int x, int y, int n);

int main(){

	return 0;
}

int qtree(int x, int y, int n){
	int a[4];
	int sum = 0;
	if(n == 1) return S[x][y];
	else {
		n /= 2;
		a[0] = qtree(x, y, n);
		a[1] = qtree(x + n, y, n);
		a[2] = qtree(x, y + n, n);
		a[3] = qtree(x + n, y + n, n);
	}
	for(int i = 0; i < 4; i++) sum += a[i];
	if(sum == 4) return 1;
	else if(sum == 0) return 0;
	else {
		for(int i = 0; i < 4; i++) ans[a[i]]++;
		return 2;
	}
}
