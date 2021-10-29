#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int t[100100],x[100100],y[100100];

  cin >> N;

  t[0] = x[0] = y[0] = 0;

  for(int i = 1;i <= N;i++){
    cin >> t[i] >> x[i] >> y[i];
  }

  bool ans = true;
  for(int i = 0;i<N;i++){
    int time = t[i+1] - t[i];
    int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);

    if((time % 2 != dist % 2) || (dist > time)){
      ans = false;
      break;
    }

  }

  if(ans){
    cout << "Yes";
  }else{
    cout << "No";
  }
}