#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second
#define ll long long

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

const int MOD = 1e9 + 7;
const int INF = 2e18;

pii sp(ll n) {
	if (n == 0)
		return {0, 0};
	ll k = static_cast<ll>(sqrt(n)) / 2;
	ll b = (2 * k) * (2 * k);
	ll d = n - b;

	if (d >= 0) {
		if (d <= 2 * k) {
			return {k, -k + d};
		} else if (d <= 4 * k + 1) {
			return {k - (d - 2 * k), k};
		} else {
			k++;
			b = (2 * k) * (2 * k);
			d = n - b;
		}
	}

	if (d >= -2 * k) {
		return {-k, -k - d};
	} else {
		return {-k + (-d - 2 * k), -k};
	}
}

void solve() {
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int a;
		cin >> a;
		auto c = sp(a);
		auto x = c.F;
		auto y = c.S;
		cout << 4 * (static_cast<ll>(pow(x, 2)) + static_cast<ll>(pow(y, 2)))
		     << "\n";
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
