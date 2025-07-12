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
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int arr[105]; 

        for (int i = 0; i < size; i++)
            cin >> arr[i];

        int mini;
        for (int i = 0; i < size; i++)
            for (int j = i + 1; j < size; j++) {
                int result = arr[i] + arr[j] + (j + 1) - (i + 1);
                if (i == 0 && j == 1) {
                    mini = result;
                    continue;
                }
                mini = min(mini, result);
            }

        cout << mini << endl;
    }
}

int32_t main() {
    // UseFile();
    FastIO();
    int t = 1;
    while (t--) Solve();
    return 0;
}
