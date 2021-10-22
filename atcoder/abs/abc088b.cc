#include <bits/stdc++.h>
using namespace std;

int main(){
  int ans = 0;
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i=0;i < N;i++){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());

  for(int i = 0;i < a.size(); i++){
    if(i == 0 || i % 2 == 0){
      ans += a.at(i);
    }else{
      ans -= a.at(i);
    }
  }

  cout << ans;
}