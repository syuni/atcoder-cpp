#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
  vector<int> v = { 2, 1, 3 };
  sort(v.begin(), v.end());
  do {
    for (int x : v) {
      cout << x << " ";
    }
    cout << endl;
  } while (next_permutation(v.begin(), v.end()));
}
