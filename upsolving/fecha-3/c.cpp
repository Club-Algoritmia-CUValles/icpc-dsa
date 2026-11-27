#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio();
  cin.tie(nullptr);
  int T, C, K;
  cin >> T >> C >> K;
  if (C > K * T) {
    cout << K * T << "\n";
  } else {
    cout << C << "\n";
  }
  return 0;
}
