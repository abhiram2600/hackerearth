
for _ in range(int(input())):
    s=input()
    if s[::-1] == s:
        if len(s)&1:
            print("YES","ODD")
        else:
            print("YES","EVEN")
    else:
        print("NO")
