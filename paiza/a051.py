def chmax(a,b):
  if a < b:
    a = b

h,w = map(int,input().split())
listA = []
dp = [[0]*(w+1) for j in range(h+1)]

for i in range(h):
  listA.append(list(map(int,input().split())))

for i in range(h):
  for j in range(w):
    if i == 0:
      dp[i][j]=max(dp[i][j],listA[i][j])
    else:
      if j == 0:
        dp[i][j]=max(dp[i][j],dp[i-1][j]+listA[i][j])
        dp[i][j]=max(dp[i][j],dp[i-1][j+1]+listA[i][j])
      if j == w-1:
        dp[i][j]=max(dp[i][j],dp[i-1][j-1]+listA[i][j])
        dp[i][j]=max(dp[i][j],dp[i-1][j]+listA[i][j])
      else:
        dp[i][j]=max(dp[i][j],dp[i-1][j-1]+listA[i][j])
        dp[i][j]=max(dp[i][j],dp[i-1][j]+listA[i][j])
        dp[i][j]=max(dp[i][j],dp[i-1][j+1]+listA[i][j])

res = 0
for j in range(w):
  res = max(res,dp[h-1][j])

print(res)
