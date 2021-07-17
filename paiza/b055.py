n,x = map(int,input().split())
min = 999999999999999999
max = -1
listA = []

for i in range(n):
  listA.append(list(map(int,input().split())))


for list in listA:
  sum = list[1]
  if x - list[0] >= 0:
    sum += list[3]
    sum += ((x-list[0]) // list[2]) * list[3]
  if sum < min:
    min = sum
  if sum > max:
    max = sum

print(min,max)