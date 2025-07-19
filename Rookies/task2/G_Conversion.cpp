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

	string value; 
	cin>>value;
	for(int i=0;i<value.size();i++){
		if(value[i] == ','){
			cout<<" ";
		} else if (value[i] >= 'a' && value[i] <= 'z') {
			int as = value[i] - 32;
			char res = as; 
			cout<<res;
		} else {
			int as = value[i] + 32;
			char res = as;
			cout<<res;
		}
	}
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}