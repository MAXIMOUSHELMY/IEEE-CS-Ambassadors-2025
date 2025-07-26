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

void swap(int* num1, int* num2) {
	int box = *num1;
	*num1 = *num2;
	*num2 = box;
}

void Solve() {
	int num1, num2;
	cin >> num1 >> num2;
	swap(&num1, &num2);
	cout << num1 << " " << num2;
}

int32_t main() {
	// UseFile();
	FastIO();
	int t = 1;
	// cin >> t;
	while (t--) Solve();
	return 0;
}
