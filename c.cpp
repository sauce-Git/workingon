#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

int arr[MAX][MAX];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int n, m;
queue<pair<int, int>> q;

void print_arr();

int main(){
	int x, y;
	int nx, ny;
	int count = 0;
	cin >> m >> n;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++){
			cin >> arr[i][j];
			if(arr[i][j] == 1) q.push(make_pair(i, j));
		}

	while(!q.empty()){
		x = q.front().first;
		y = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			nx = x + dx[i];
			ny = y + dy[i];
			if(nx >= 0 && ny >= 0 && nx < n && ny < m && arr[nx][ny] == 0){
				q.push(make_pair(nx, ny));
				arr[nx][ny] = arr[x][y] + 1;
				count = arr[nx][ny] - 1;
			}
		}
	}

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(!arr[i][j]) count = -1;

	cout << count;

	return 0;
}

void print_arr(){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
			
}
