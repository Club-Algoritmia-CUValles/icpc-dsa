#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF = LLONG_MAX / 2;

vector<vector<pair<int, int>>> adj;
vector<ll> dist_;

const int MOD = 1e9 + 7;
const int MAXN = 100005;

vector<ll> fact, inv_fact;

ll power(ll a, ll b, ll mod) {
  ll res = 1;
  a %= mod;
  while (b > 0) {
    if (b & 1)
      res = res * a % mod;
    a = a * a % mod;
    b >>= 1;
  }
  return res;
}

void precompute_factorials(int maxn) {
  fact.assign(maxn, 1);
  inv_fact.assign(maxn, 1);
  for (int i = 1; i < maxn; i++)
    fact[i] = fact[i - 1] * i % MOD;
  inv_fact[maxn - 1] = power(fact[maxn - 1], MOD - 2, MOD);
  for (int i = maxn - 2; i >= 0; i--)
    inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
}

ll nCr(int n, int r) {
  if (r < 0 || r > n || n < 0)
    return 0;
  return fact[n] * inv_fact[r] % MOD * inv_fact[n - r] % MOD;
}

void dijkstra(int src, int n) {
  dist_.assign(n, INF);
  dist_[src] = 0;
  priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<>> pq;
  pq.push({0, src});

  while (!pq.empty()) {
    auto [d, u] = pq.top();
    pq.pop();
    if (d > dist_[u])
      continue;
    for (auto [v, w] : adj[u]) {
      ll nd = d + w;
      if (nd < dist_[v]) {
        dist_[v] = nd;
        pq.push({nd, v});
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m, k;
  cin >> n >> m >> k;

  adj.assign(n, {});
  for (int i = 0; i < m; i++) {
    int p, q, w;
    cin >> p >> q >> w;
    adj[p].push_back({q, w});
    adj[q].push_back({p, w});
  }

  dijkstra(0, n);
  precompute_factorials(MAXN);
  sort(dist_.begin() + 1, dist_.end());

  ll numerator = 0;
  int total = n - 1;
  for (int i = 1; i <= total; i++) {
    ll term = (dist_[i] % MOD) * nCr(total - i, k - 1) % MOD;
    numerator = (numerator + term) % MOD;
  }

  ll denominator = nCr(total, k);
  ll answer = numerator * power(denominator, MOD - 2, MOD) % MOD;

  cout << answer << "\n";

  return 0;
}
