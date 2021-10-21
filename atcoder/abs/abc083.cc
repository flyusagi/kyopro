#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,A,B;
  int ans = 0;
  cin >> N >> A >> B;
  for(int i = 0;i <= N ; i++){
    if(i < 10){
      if(A <= i && i <= B){
        ans += i;
      }
    }else if(10 <= i && i <=99){
        string num = to_string(i);
        int a = int(num[0] - '0');
        int b = int(num[1] - '0');
        if(A <= a+b && a+b <= B){
          ans += i;
        }
    }else if(100 <= i && i <= 999){
        string num = to_string(i);
        int a = int(num[0] - '0');
        int b = int(num[1] - '0');
        int c = int(num[2] - '0');
        if(A <= a+b+c && a+b+c <= B){
          ans += i;
        }
    }else if(1000 <= i && i <= 9999){
        string num = to_string(i);
        int a = int(num[0] - '0');
        int b = int(num[1] - '0');
        int c = int(num[2] - '0');
        int d = int(num[3] - '0');
        if(A <= a+b+c+d && a+b+c+d <= B){
          ans += i;
        }
    }else{
      if(A <= 1 && 1 <= B){
        ans += i;
      }
    }
  }
  cout << ans;
}