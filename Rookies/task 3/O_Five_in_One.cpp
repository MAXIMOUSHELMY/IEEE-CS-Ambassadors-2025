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

bool isPrime(int num) {
	if (num < 2) return false;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

bool isPalindrome(int num) {
	string s = to_string(num);
	string r = s;
	reverse(r.begin(), r.end());
	return s == r;
}

int countDivisors(int num) {
	int cnt = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cnt++;
	}
	return cnt;
}

void Solve() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	int maxNum = *max_element(all(arr));
	int minNum = *min_element(all(arr));
	int primeCount = 0, palCount = 0;
	for (int i = 0; i < n; i++) {
		if (isPrime(arr[i])) primeCount++;
		if (isPalindrome(arr[i])) palCount++;
	}
	int maxDiv = 0, maxDivNum = 0;
	for (int i = 0; i < n; i++) {
		int divs = countDivisors(arr[i]);
		if (divs > maxDiv || (divs == maxDiv && arr[i] > maxDivNum)) {
			maxDiv = divs;
			maxDivNum = arr[i];
		}
	}

	cout << "The maximum number : " << maxNum << endl;
	cout << "The minimum number : " << minNum << endl;
	cout << "The number of prime numbers : " << primeCount << endl;
	cout << "The number of palindrome numbers : " << palCount << endl;
	cout << "The number that has the maximum number of divisors : " << maxDivNum << endl;
}

int32_t main() {
	// UseFile();
	FastIO();
	int t = 1;
	// cin >> t;
	while (t--) Solve();
	return 0;
}
