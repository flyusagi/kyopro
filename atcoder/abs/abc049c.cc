#include <bits/stdc++.h>
using namespace std;

int main(){
  string text[4] = {"dream","dreamer","erase","eraser"};
  string S;
  cin >> S;
  
  reverse(S.begin(),S.end());
  for(int i = 0; i < 4 ;i++){
    reverse(text[i].begin(), text[i].end());
  }

  bool ans = true;

  for(int i = 0;i < S.size();){
    bool div = false;
    for(int j = 0;j < 4;j++){
      if(S.substr(i,text[j].size()) == text[j]){
        i += text[j].size();
        div = true;
        break;
      }
    }
    if(!div){
      ans = false;
      break;
    }
  }

  if(ans){
    cout << "YES";
  }else{
    cout << "NO";
  }
}