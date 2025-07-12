#include <bits/stdc++.h>
using namespace std;
#define int    long long
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { ios_base::sync_with_stdio(false); cin.tie(nullptr); }
const int MOD = 1000000007;

void Solve() {
    int left, right;
    string result;
    cin >> left >> right;
    cin >> result;
    bool flag = false;
    if (result[left] != '-' || result.size() != left + right + 1 || result[result.size() - 1] == '-' || result[0] == '-') {
        cout << "No\n";
        return;
    }

    for (int i = 0; i < (int)result.size(); i++) {
        if (i == left && result[i] == '-') {
            continue;
        }
        if (result[i] >= '0' && result[i] <= '9') {
            flag = true;
            continue;
        } else {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}
