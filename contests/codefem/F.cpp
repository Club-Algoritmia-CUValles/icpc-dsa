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
	int N, B;
	cin >> N >> B;
	vi a(N);
	for (int i = 0; i < N; i++)
		cin >> a[i];

	int sum = 0, b = 0;
	int l = 0, r = 0;
	while (r < N) {
		sum += a[r];
		while (sum > B && l <= r) {
			sum -= a[l];
			l++;
		}
		b = max(b, r - l + 1);
		r++;
	}
	cout << b << "\n";
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
