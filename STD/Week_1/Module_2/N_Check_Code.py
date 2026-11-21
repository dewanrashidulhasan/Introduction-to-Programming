a,b=map(int,input().split())
s=input()
ok=True
if s[a]!='-':
    ok=False
else:
    for i in range(a+b+1):
        if i!=a and s[i] not in "0123456789":
            ok= False
            break
if ok:
    print("Yes")
else:
    print("No")