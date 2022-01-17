#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W,N;
  cin >> H >> W >> N;

  vector<vector<char>> s(H,vector<char>(W));
  for(int i = 0; i < H;i++){
    for(int j = 0;j < W;j++){
      cin >> s.at(i).at(j);
    }
  }

  string ope;
  cin >> ope;

  vector<pair<int,int>> pairs;
  int cnt = 0;

  for(int i = 0;i < N;i++){
    if(ope.at(i) == 'D'){
        for(int j = 0; j < H;j++){
          for(int k = 0;k < W;k++){
            if(s.at(j).at(k) == '#'){
              if((k-1) >= 0)  pairs.push_back(make_pair(j,k-1));
              if((k+1) < W) pairs.push_back(make_pair(j,k+1));
              if((j-1) >= 0) pairs.push_back(make_pair(j-1,k));
              if((j+1) < H) pairs.push_back(make_pair(j+1,k));
            }
          }
        }
        for(int j = cnt;j < pairs.size();j++){
          int a,b;
          tie(a,b) = pairs[j];
          s.at(a).at(b) = '#';
          if(j == (pairs.size()-1)) cnt = j+1;
        }
    }else{
        for(int j = 0; j < H;j++){
          for(int k = 0;k < W;k++){
            if(s.at(j).at(k) == '.'){
              if((k-1) >= 0)  pairs.push_back(make_pair(j,k-1)); 
              if((k+1) < W) pairs.push_back(make_pair(j,k+1));
              if((j-1) >= 0) pairs.push_back(make_pair(j-1,k));
              if((j+1) < H) pairs.push_back(make_pair(j+1,k));
            }
          }
        }
        for(int j = cnt;j < pairs.size();j++){
          int a,b;
          tie(a,b) = pairs[j];
          s.at(a).at(b) = '.';
          if(j == (pairs.size()-1)) cnt = j+1;
        }
    } 
  }

  for(int i = 0; i < H;i++){
    for(int j = 0;j < W;j++){
      cout << s.at(i).at(j);
      if(j == W-1) cout << endl;
    }
 }
}
