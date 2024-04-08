def solve():
    x = int(input()) 
    a = 1
    for i in range(x):
        a *= 10

    result = (a//3) % (10**9 + 7)
    print(result)

t = int(input())
for _ in range(t):
    solve()

