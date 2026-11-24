n=int(input())
arr=list(map(int,input().split()))
l,r=0,n-1
is_palindrom=True
while l<r:
    if arr[l]!=arr[r]:
        is_palindrom=False
        break
    l+=1
    r-=1
if(is_palindrom): print("YES")
else: print("NO")