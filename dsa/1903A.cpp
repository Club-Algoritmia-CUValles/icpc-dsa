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
	int n, k;
	cin >> n >> k;
	vi a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	if (is_sorted(a.begin(), a.end()) or k > 1) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc;
	cin >> tc;
	while (tc--)
		solve();
	return 0;
}
