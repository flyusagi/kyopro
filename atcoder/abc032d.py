n,W = map(int,input().split())
w = []
v = []
dp = [[0] * (W+1) for j in range(n)]

for i in range(n):
  x,y = map(int,input().split())
  v.append(x)
  w.append(y)

for i in range(n):
  for j in range(W+1):
    if i == 0:
      dp[i][j] = 0
    else:
      if j < w[i]:
        dp[i][j] = dp[i-1][j]
      else:
        dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+v[i])

print(dp[n-1][W])

