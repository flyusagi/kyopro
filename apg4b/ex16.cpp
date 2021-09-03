#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  int a = 101;
  bool ans = false;
  for(int x : data){
    if(x == a){
      cout << "YES" << endl;
      ans = true;
      break;
    }
    a = x;
  }

  if(!ans){
    cout << "NO" << endl;
  }
  
}
