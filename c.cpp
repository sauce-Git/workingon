#include <iostream>
#include <cmath>
#define abs(x) ((x < 0) ? (-x):(x))
#define MAX 100000
using namespace std;

int arr[MAX + 1] = {0, };
int arr_size = 1;

void print_arr();
void swap(int a, int b);
void heap_in(int x);
int heap_pop();

int main(){
	int n, a;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> a;
		if(a) heap_in(a);
		else heap_pop();
		print_arr();
	}
	return 0;
}

void print_arr(){
	for(int i = 0; i < arr_size; i++) cout << arr[i] << " ";
	cout << "\n";
}

void swap(int a, int b){
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void heap_in(int x){
	int i = arr_size;
	arr[arr_size++] = x;
	while(i - 1){
		if(abs(arr[i]) < abs(arr[i/2]) || ((arr[i] < 0) && (arr[i]  == -arr[i/2]))) swap(i, i/2), i /= 2;
		else return;
	}
	return;
}

int heap_pop(){
	int pop = arr[1];
	int i = 1;
	int a = arr[--arr_size];
	arr[arr_size] = 0;
	while(1){
		if(abs(arr[2*i]) < abs(arr[i]))
	}
}
