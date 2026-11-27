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

void solve() {
	// solution
	int n;
	cin >> n;
	int sol = 0;
	map<int, int> d; // val -> lev;
	while (n--) {
		int x;
		cin >> x;
		auto [it, val] = d.emplace(x, 0);
		if (!val)
			continue;

		int l = (it == d.begin()) ? 0 : prev(it)->second;
		auto rit = next(it);
		int r = (rit == d.end()) ? 0 : rit->second;
		it->second = 1 + max(l, r);
		sol = max(sol, it->second);
	}

	cout << sol << "\n";
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
