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

void solution1()
{
    string str, temp;
    getline(cin, str);
    char ch;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            temp += str[i];
        }

        if ((str[i] == ' ' || i == str.size() - 1) && temp.size() != 0)
        {
            for (int j = 0; j < temp.size() / 2; j++)
            {
                ch = temp[j];
                temp[j] = temp[temp.size() - 1 - j];
                temp[temp.size() - 1 - j] = ch;
            }

            if (i == str.size() - 1)
            {
                cout << temp;
            }
            else
            {
                cout << temp << " ";
            }
            temp.clear();
        }
    }
}

void solution2()
{
    string str;
    bool space = false;
    while (cin >> str)
    {
        reverse(str.begin(), str.end());
        if (space)
        {
            cout << " ";
        }
        space = true;
        cout << str;
    }
}

void Solve() {
    solution2(); // أو استخدم solution1(); على حسب اللي تحب تجربه
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}
