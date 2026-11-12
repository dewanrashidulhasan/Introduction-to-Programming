def palindrom(n):
    rev=n[::-1].lstrip('0')
    if rev=="":
        rev="0"
    print(rev)
    if n==n[::-1]:
        print("YES")
    else:
        print("NO")

n=input().strip()
palindrom(n)