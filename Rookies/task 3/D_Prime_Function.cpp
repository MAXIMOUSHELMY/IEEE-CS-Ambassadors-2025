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

bool prime(int num) {
	int newNumber = sqrt(num);
	int flag = 0;
	for (int i = 2; i <= newNumber; i++) {
		if (num % i == 0) {
			flag = 1;
			break;
		}
	}
	return flag;
}

void Solve() {
	int size;
	cin >> size;
	while (size--) {
		int num;
		cin >> num;
		if (num == 1) {
			cout << "NO" << endl;
			continue;
		}
		int pr = prime(num);
		if (pr == 1) {
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
	}
}

int32_t main() {
	// UseFile();
	FastIO();
	int t = 1;
	// cin >> t;
	while (t--) Solve();
	return 0;
}
