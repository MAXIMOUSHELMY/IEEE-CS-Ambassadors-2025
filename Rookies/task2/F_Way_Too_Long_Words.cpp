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
	int wordSize; 
	cin>>wordSize;
	while(wordSize--){ 
		string value; 
		cin>>value;
		int size = value.size();
		if(size > 10){
			cout<<value[0]<<size-2<<value[size-1]<<endl;
		} else {
			cout<<value<<endl;
		}
	}
	
	
}
int32_t main() {
    FastIO();
    Solve();
    return 0;
}