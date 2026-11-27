from collections import deque

n = int(input("Enter the quatity of characters N: "))
q = deque()
for _ in range(n):
    s, rep = input().split()
    q.append((s, int(rep)))

sol = []

while q:
    mx = max(q, key=lambda x: x[1])
    q.remove(mx)
    sol.append(mx)

print("Descending staircase ordered by rep")
for s, rep in sol:
    print(s * rep, rep)
