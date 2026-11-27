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
	int a, b, c;
	cin >> a >> b >> c;
	// case a
	if ((a - 1 == b + 1 && a - 1 == c) || (a - 1 == c + 1 && a - 1 == b)) {
		cout << "YES\n";
	} else if ((b - 1 == a + 1 && b - 1 == c) ||
	           (b - 1 == c + 1 && b - 1 == a)) {
		cout << "YES\n";
	} else if ((c - 1 == a + 1 && c - 1 == b) ||
	           (c - 1 == b + 1 && c - 1 == a)) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	cin >> tc;
	while (tc--)
		solve();
	return 0;
}
