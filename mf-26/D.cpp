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
	string s;
	cin >> s;
	int n;
	n = s.size();
	int on = count(s.begin(), s.end(), '1');

	int mn = n, mx = 0;
	for (int i = 0; i < n; i++) {
		int b = (s[i] - '0') ^ (i % 2);
		on = n - on + (b ? 1 : -1);

		mn = min(mn, on);
		mx = max(mx, on);
	}
	cout << mn << " " << mx << '\n';
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
