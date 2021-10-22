#include <bits/stdc++.h>
using namespace std;

int main(){
  set<int>d;
  int N,tmp;
  int ans = 0;
  cin >> N;
  for(int i = 0;i < N;i++){
    cin >> tmp;
    d.insert(tmp);
  }
  for(auto itr = d.begin(); itr != d.end(); itr++){
    ans++;
  }
  cout << ans;
}