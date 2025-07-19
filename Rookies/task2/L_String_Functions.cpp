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
    {
    int size, query_num;
    cin >> size >> query_num;
    string str;
    cin >> str;
    while (query_num--)
    {
        string query;
        cin >> query;
        int left, right;
        if (query == "pop_back")
        {
            str.pop_back();
        }
        else if (query == "front")
        {
            cout << str.front() << endl;
        }
        else if (query == "back")
        {
            cout << str.back() << endl;
        }
        else if (query == "sort")
        {

            cin >> left >> right;
            // sort(str.begin() + min(left, right) - 1, str.begin() + max(left, right));
            sort(&str[min(left, right) - 1], &str[max(left, right)]);
        }
        else if (query == "reverse")
        {
            cin >> left >> right;
            // reverse(str.begin() + min(left, right) - 1, str.begin() + max(left, right));
            reverse(&str[min(left, right) - 1], &str[max(left, right)]);
        }
        else if (query == "print")
        {
            int pos;
            cin >> pos;
            cout << str[pos - 1] << endl;
        }
        else if (query == "substr")
        {
            cin >> left >> right;
            for (int i = min(left, right) - 1; i < max(left, right); i++)
            {
                cout << str[i];
            }
            cout << endl;
        }
        else if (query == "push_back")
        {
            char x;
            cin >> x;
            str.push_back(x);
        }
    }
}
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}