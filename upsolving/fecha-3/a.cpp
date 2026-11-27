#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  cin >> N;
  vector<ll> prefix(N + 1);
  for (int i = 1; i <= N; i++) {
    ll c, v;
    cin >> c >> v;
    prefix[i] = prefix[i - 1] + c - v;
  }
  int Q;
  cin >> Q;
  while (Q--) {
    int n;
    cin >> n;
    if (prefix[n] > 0) {
      cout << "COMPRA\n";
    } else if (prefix[n] < 0) {
      cout << "VENDA\n";
    } else {
      cout << "NEUTRO\n";
    }
  }
  return 0;
}
