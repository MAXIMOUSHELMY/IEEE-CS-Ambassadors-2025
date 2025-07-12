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

void Solve() {
    int n;
    cin >> n;
    int arr[n];
    int f = 0;   

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <= n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            f = 1;
            break;
        }
    }

    if (f == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}


/*
NOTES:

*/

int32_t main() {
    // UseFile();
    FastIO();
    int t = 1;
    // cin >> t;
    while (t--) Solve();
    return 0;
}