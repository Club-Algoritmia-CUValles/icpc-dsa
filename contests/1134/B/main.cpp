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
	string s;
	cin >> s;
	char curr_pen = 'R';
	int sw = 0;
	for (int i = 0; i < n; i++) {
		if (curr_pen != s[i]) {
			curr_pen = s[i];
			sw++;
		}
		if (curr_pen == 'R') {
			curr_pen = 'B';
		} else {
			curr_pen = 'R';
		}
	}
	cout << sw << "\n";
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
