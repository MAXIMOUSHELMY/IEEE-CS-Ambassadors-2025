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
    int size;
    cin >> size;
    int arr[1000]; 
    int min_val, max_val, min_index, max_index, temp;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
        if (i == 0) {
            min_val = max_val = arr[i];
            min_index = max_index = 0;
        }
        if (arr[i] < min_val) {
            min_val = arr[i];
            min_index = i;
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
            max_index = i;
        }
    }

    temp = arr[min_index];
    arr[min_index] = arr[max_index];
    arr[max_index] = temp;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}
