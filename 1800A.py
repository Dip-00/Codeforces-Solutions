import re
t=int(input())
for T in range(t):
    n=input()
    s=input()
    print("YES" if re.findall(r"^[Mm]+[Ee]+[Oo]+[Ww]+$",s) else "NO")