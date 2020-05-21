#include <bits/stdc++.h>
#include <tuple>
#include <utility>
using namespace std;

int main() {
  pair<string, int> p("abc", 3);
  cout << p.first << endl; // abc

  p.first = "hello";
  cout << p.first << endl; // hello
  cout << p.second << endl; // 3

  p = make_pair("*", 1);
  // p = pair<string, int>("*", 1);

  string s;
  int a;
  tie(s, a) = p;
  cout << s << endl; // *
  cout << a << endl; // 1

  tuple<int, string, bool> data(1, "hello", true);
  get<2>(data) = false;
  cout << get<1>(data) << endl; // hello

  data = make_tuple(2, "WORLD", true);

  int aa;
  string ss;
  bool ff;
  tie(aa, ss, ff) = data;
  // cout << aa << " " << ss < " " << ff << endl;
}
