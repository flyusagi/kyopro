n = int(input())
a = []

for i in range(n):
  a.append(int(input()))

# 累積和配列s
s = [0]
for i in range(n):
  s.append(s[i] + a[i])

# ex. 1から3までの和を求める
ans = s[4]-s[1]
print(ans)
