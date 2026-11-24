n=int(input())
a=list(map(int,input().split()))
min_i=a.index(min(a))
max_i=a.index(max(a))
a[min_i],a[max_i]=a[max_i],a[min_i]
print(*a)