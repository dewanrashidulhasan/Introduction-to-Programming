n,k=list(map(int,input().split()))
arr=list(map(int,input().split()))
pref=[0]*(n+1)
for i in range(n):
    pref[i+1]=pref[i]+arr[i]
for i in range(k):
    l,r=map(int,input().split())
    sum=pref[r]-pref[l-1]
    print(sum)