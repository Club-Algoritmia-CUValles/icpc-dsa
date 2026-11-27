// Apple clang/clangd uses libc++ but finds the GNU bits/stdc++.h in
// /usr/local/include, whose contents are guarded by #if _GLIBCXX_HOSTED.
// GCC headers define it; libc++ doesn't, so without this the whole file is
// skipped and cin/cout end up undeclared.
#define _GLIBCXX_HOSTED 1
#include "bits/stdc++.h"
#define vi vector<int>
using namespace std;

int main() {
  vi al(5);
  vi bo(4);
  for (size_t i = 0; i < 5; i++) {
    cin >> al[i];
  }

  for (size_t i = 0; i < 4; i++) {
    cin >> bo[i];
  }

  // Gauss formula: sum(1..n) = n * (n + 1) / 2.
  // The missing number is the expected sum minus what was actually given.
  long long expected = 5LL * (5 + 1) / 2;

  long long got = 0;
  for (size_t i = 0; i < 4; i++) {
    got += bo[i];
  }

  cout << (expected - got) << "\n";

  return 0;
}
