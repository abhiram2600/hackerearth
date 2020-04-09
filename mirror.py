for _ in range(int(input())):
    s = list(input())
    flag = 0
    for i in s:
        if i == "1" or i == "0" or i == "8":
            pass
        else:
            flag = 1
            break
    if flag == 1:
        print("NO")
    else:
        for i in range(len(s)):
            if s[i] == s[len(s) - 1 - i]:
                pass
            else:
                flag = 1
                break

        if flag == 0:
            print("YES")
        else:
            print("NO")
