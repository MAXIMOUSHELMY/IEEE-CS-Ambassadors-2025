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

	string sen,res; 
	int counter = 0;
	getline(cin,sen);
	for(int i=0;i<sen.size();i++){ 
		if(sen[i] != 32& sen[i] != '!' && sen[i] != '.' && sen[i] != '?' && sen[i] != ','){
			res+=sen[i];
		}
		if((sen[i] == 32 || sen[i] == '!' || sen[i] == '.' || sen[i] =='?' || sen[i] == ',' || i == sen.size() - 1)
		   && res.size() != 0){
			counter++;
			res = "";
		}
	}
	cout<<counter<<endl;
}
int32_t main() {
    FastIO();
    Solve();
    return 0;
}