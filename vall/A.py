word = input().strip().upper()
n = len(word)
rev = word[::-1]

gap = " " * (n + 1)

# Top of the three telephones
top1 = word * 3
top2 = word + " " * n + rev

print(gap.join([top1] * 3))
print(gap.join([top2] * 3))

# Body
for i in range(1, n + 1):
    body = " " * (n - i + 1) + word[:i] + "-" * (n - 1) + rev[:i]

    if i == n:
        print((" " + "*" * n).join([body] * 3))
    else:
        print(gap.join([body.ljust(3 * n)] * 3).rstrip())
