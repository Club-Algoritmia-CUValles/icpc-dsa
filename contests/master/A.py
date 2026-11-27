a, b, c = map(int, input().split())


ans = 0
curr = 0
apt = 1
# c -> objectivo de casas 2 ->
# 5 1 2
# curr = 1
#
#
while apt < c:
    apt += curr // a
    curr %= a

    if apt >= c:
        break

    curr += apt * b
    ans += 1


print(ans)
