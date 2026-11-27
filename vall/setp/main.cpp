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

bool primes[1000001];
void solve() {
	// solution
	//
	int n;
	cin >> n;
	for (int i = 0; i <= n; i++)
		primes[i] = true;
	primes[0] = primes[1] = false;

	for (int p = 2; p * p <= n; p++) {
		if (!primes[p])
			continue;
		for (int j = p * p; j <= n; j += p)
			primes[j] = false;
	}

	int c = 0, t = 0, l = -1;
	for (int p = 2; p <= n; p++) {
		if (primes[p])
			c++;
		if (p + 2 <= n && primes[p] && primes[p + 2]) {
			t++;
			l = p;
		}
	}

	cout << c << "\n";
	cout << t << "\n";
	if (l == -1)
		cout << "None\n";
	else
		cout << l << " " << l + 2 << "\n";
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
