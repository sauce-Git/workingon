#include <iostream>
#define MAX 15
using namespace std;

int main(){
	int arr[MAX][MAX];
	for(int i = 1; i < MAX; i++) {
		arr[0][i] = i;
		arr[i][1] = 1;
	}
	for(int i = 1; i < MAX; i++)
		for(int j = 2; j < MAX; j++){
			arr[i][j] = arr[i-1][j] + arr[i][j-1];	
		}
	int t, k, n;
	cin >> t;
	while(t--){
		cin >> k >> n;
		cout << arr[k][n] << "\n";
	}
	return 0;
}
