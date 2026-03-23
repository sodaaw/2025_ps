g = [1, 2, 3, 3, 4, 10]
s = [1, 2, 2, 2, 3, 5, 10]

t = int(input())

for i in range(t):
    # 크기 6인 배열, 7인 배열 각각 입력받기
    g_list = list(map(int, input().split()))
    s_list = list(map(int, input().split()))

    g_count = 0
    s_count = 0

    for j in range(6):
        g_count += g[j] * g_list[j]

    for j in range(7):
        s_count += s[j] * s_list[j]

    if g_count > s_count:
        print(f"Battle {i+1}: Good triumphs over Evil")
    elif s_count > g_count:
        print(f"Battle {i+1}: Evil eradicates all trace of Good")
    else:
        print(f"Battle {i+1}: No victor on this battle field")
