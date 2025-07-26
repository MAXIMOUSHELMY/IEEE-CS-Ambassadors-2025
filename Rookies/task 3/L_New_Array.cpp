#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { ios_base::sync_with_stdio(false); cin.tie(nullptr); }
void UseFile() { freopen("file.in", "r", stdin); freopen("file.out", "w", stdout); }
const int MOD = 1000000007;
const int s = 10001;

void print(int arr[s], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}

void Solve() {
	int size;
	cin >> size;
	int arr1[s], arr2[s];
	for (int i = 0; i < size; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < size; i++) {
		cin >> arr2[i];
	}
	print(arr2, size);
	print(arr1, size);
}

int32_t main() {
	// UseFile();
	FastIO();
	int t = 1;
	// cin >> t;
	while (t--) Solve();
	return 0;
}
