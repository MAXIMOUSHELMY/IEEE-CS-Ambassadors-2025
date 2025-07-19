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
	string myValue = "hello";
	int i = 0;
	int z = 0;
	while(true){
		if(i == value.size() || z == myValue.size()){
			break;
		}
		if(value[i] == myValue[z]){
			z++; 
		}
		i++;
	}
	if(z == 5){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}