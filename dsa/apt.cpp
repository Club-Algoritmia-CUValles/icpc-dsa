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
	int n, m, k;
	cin >> n >> m >> k;
	vi ai(n);
	for (int i = 0; i < n; i++)
		cin >> ai[i];
	sort(ai.begin(), ai.end());
	int ans = 0;
	for (int i = 0; i < m; i++) {
		int x;
		cin >> x;
		int low = x - k;
		int high = x + k;
		auto it = lower_bound(ai.begin(), ai.end(), low);
		bool ok = (it != ai.end() && *it <= high);
		if (ok)
			ans++;
	}
	cout << ans << "\n";
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
