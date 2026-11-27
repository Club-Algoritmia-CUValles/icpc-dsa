
#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void sortt(vi &arr1, vi &arr2, vi &arr3) {
  int n = arr1.size();
  vi idx(n);
  iota(idx.begin(), idx.end(), 0);
  sort(idx.begin(), idx.end(), [&](int i, int j) { return arr1[i] < arr1[j]; });

  vi r1(n), r2(n), r3(n);
  for (int i = 0; i < n; i++) {
    r1[i] = arr1[idx[i]];
    r2[i] = arr2[idx[i]];
    r3[i] = arr3[idx[i]];
  }
  arr1 = move(r1);
  arr2 = move(r2);
  arr3 = move(r3);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int N;
  cin >> N;
  vector<int> tim(N);
  vector<int> pls(N);
  vector<int> fam(N);
  for (int i = 0; i < N; i++)
    cin >> tim[i];

  for (int i = 0; i < N; i++)
    cin >> pls[i];

  for (int i = 0; i < N; i++)
    cin >> fam[i];

  sortt(tim, pls, fam);
  int acc = 0, ap = 0, af = 0;
  for (int i = 0; i < N; i++) {
    int tp = tim[i] * 3;
    if (acc <= 480 and tp + acc <= 780) {
      ap += pls[i];
      af += fam[i];
    }
    acc += tp;
  }
  if (ap == af) {
    cout << "EITHER\n";
  } else if (ap > af) {
    cout << "PLEASURE\n";
  } else {
    cout << "FAME";
  }
  return 0;
}
