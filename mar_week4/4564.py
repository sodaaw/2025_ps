while True:
    s = int(input())
    if s == 0: break

    while True:
        # 숫자를 split? 같은걸로 쪼개서 자리수 곱하고 출력
        # 숫자 < 10이라면 break

        print(s, end=' ')

        if s < 10: break
        ans = 1

        for digit in str(s):
            ans *= int(s)

        s = ans

print()