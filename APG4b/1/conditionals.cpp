#include <iostream>
using namespace std;

int main() {
  cout << (5 < 10) << endl; // 真
  cout << (5 > 10) << endl; // 偽

  // 1は真を表すのでhelloと出力される
  if (1) { // == true
    cout << "hello" << endl;
  }

  // 0は偽を表すのでこのifの中は実行されない
  if (0) { // == false
    cout << "world" << endl;
  }

  int x;
  cin >> x;

  bool a = true;
  bool b = x < 10; // xが10未満のときtrue,そうでないときfalseになる
  bool c = false;

  if (a && b) {
    cout << "hello" << endl;
  }
  if (c) {
    cout << "world" << endl;
  }
}
