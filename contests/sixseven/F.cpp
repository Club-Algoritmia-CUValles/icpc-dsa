#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

const int MOD = 1e9 + 7;
const int INF = 2e18;

const int DIG = 10;

void solve() {
	string s;
	cin >> s;
	int size = s.size();
	map<int, int> f;
	for (int i = 0; i < size - DIG; i++) {
		f[2]++;
		f[5]++;
	}
	int y = stoll(s.substr(0, 10));
	for (int p = 2; p * p <= y; p++) {
		while (y % p == 0) {
			y /= p;
			f[p]++;
		}
	}
	if (y > 1) {
		f[y]++;
	}
	int fs = f.size();
	cout << fs << "\n";

	for (auto it : f) {
		cout << it.first << " " << it.second << "\n";
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	// cin >> tc;
	while (tc--)
		solve();
	return 0;
}
