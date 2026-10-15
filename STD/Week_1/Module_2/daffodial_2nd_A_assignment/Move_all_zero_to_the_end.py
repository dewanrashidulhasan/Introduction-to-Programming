def zeros(n):
    k=0
    for i in n:
        if i!=0:
            n[k]=i
            k+=1
    while k<len(n):
        n[k]=0
        k+=1
    return n
n=list(map(int,input().split()))
print(*zeros(n))