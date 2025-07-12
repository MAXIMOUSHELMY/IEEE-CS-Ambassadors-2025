#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int, int>
#define all(v) v.begin(), v.end()
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
void FastIO() { ios_base::sync_with_stdio(false); cin.tie(nullptr); }
const int MOD = 1000000007;

void Solve() {
    int counter;
    cin >> counter;
    while (counter--) {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        int i = 0;
        int z = 0;
        int ma;
        while (true) {
            if (z == size - 1) {
                break;
            }
            if (i == z) {
                ma = max(arr[i], arr[i + 1]);
            } else {
                ma = max(ma, arr[i + 1]);
            }
            cout << ma << " ";
            i++;
            if (i == size - 1) {
                z++;
                i = z;
            }
        }
        cout << "\n";
    }
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}

