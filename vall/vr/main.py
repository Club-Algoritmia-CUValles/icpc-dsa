voc = "aeiouAEIOU"
op = "aeoAEO"


def trans(w):
    a = list(w)
    vp = [v for v in range(len(a)) if a[v] in voc]
    rv = [a[i] for i in vp][::-1]

    for i, v in zip(vp, rv):
        a[i] = v

    i = 0
    while i < len(a) - 1:
        if a[i] in op:
            a[i], a[i + 1] = a[i + 1], a[i]
            i += 2
        else:
            i += 1

    return "".join(a)


def solve():
    # solution
    print(" ".join(trans(w) for w in input().split()))


if __name__ == "__main__":
    solve()
