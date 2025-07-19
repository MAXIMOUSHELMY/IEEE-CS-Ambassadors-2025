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

	int testCases;
	cin>>testCases; 
	while(testCases--){ 
		string value1,value2;
		cin>>value1>>value2; 

		int size = value1.size() + value2.size();
		int flag1 = 1,flag2 = 1;
		for(int i=0;i<size;i++){ 
			if(value1.size() != i && flag1){ 
				cout<<value1[i];
			} else {
				flag1 = 0;
			}
			if(value2.size() != i && flag2){
				cout<<value2[i];
			} else {
				flag2 = 0;
			}	
		}
		cout<<endl;
	}
}

int32_t main() {
    FastIO();
    Solve();
    return 0;
}