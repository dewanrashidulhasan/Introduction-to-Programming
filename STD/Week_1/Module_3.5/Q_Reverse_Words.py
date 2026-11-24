s=input().split()
arr=[]
for i in s:
    rev=i[::-1]
    arr.append(rev)
print(" ".join(arr))
