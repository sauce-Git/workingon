#include <iostream>
using namespace std;

bool selected[8] = {false, };
int arr[8];
int arr_size = 0;


void pick(int& n, int& m, int c);
void print_arr(int& m);

int main(){
	int n, m;
	cin >> n >> m;

	pick(n, m, m);
	return 0;
}

void pick(int& n, int& m, int c){
	if(!c){
		print_arr(m);
		return;
	}
	for(int i = 0; i < n; i++){
		if(!selected[i]){
			selected[i] = true;
			arr[arr_size++] = i;
			pick(n, m, c-1);
			selected[i] = false;
			arr_size--;
		}
	}
	return;
}

void print_arr(int& m){
	for(int i = 0; i < m; i++) cout << arr[i] + 1 << " ";
	cout << "\n";
	return;
}
