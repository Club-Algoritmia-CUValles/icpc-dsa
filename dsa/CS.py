from itertools import permutations

s = input()
up = sorted(list(set(''.join(p) for p in permutations(s))))

print(len(up))
for u in up:
    print(u)
