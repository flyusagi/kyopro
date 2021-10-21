#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int count = 0;
  int loop = 1;
  vector<int> a(n);

  cin >> n;
  for (int i = 0;i<n;i++){
    cin >> a.at(i);
  }

  while(loop){
    for(int i =0;i<n;i++){
      if(a.at(i) % 2 == 0){
        a.at(i) = a.at(i) / 2;
        if(i == n-1){
          count++;
          }
        }else{
          loop = 0;
          break;
      }
    }
  }

  cout << count;
}