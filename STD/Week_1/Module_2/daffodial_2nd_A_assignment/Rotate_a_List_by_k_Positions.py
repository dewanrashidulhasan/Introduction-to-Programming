def rotate_list(a,k):
    n=len(a)
    if n==0:
        return a
    k%=n
    def reverse(l,r):
        while l<r:
            a[l],a[r]=a[r],a[l]
            l+=1
            r-=1

    reverse(0,n-1)
    reverse(0,k-1)
    reverse(k,n-1)
    return a
a=list(map(int,input().split()))
k=int(input())
print(rotate_list(a,k))