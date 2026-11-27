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
	int N;
	cin >> N;
	int as = 0;
	vi a(N);
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		a.pb(tmp);
		as += tmp;
	}
	int div = as / N;
	bool sorted = false;

	while (!sorted) {
		if (a[i] < div) {
			cout << "-1\n";
			return 0;
		}
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
