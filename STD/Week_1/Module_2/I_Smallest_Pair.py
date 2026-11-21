t= int(input())
for i in range(t):
    n= int(input())
    arr= list(map(int,input().split()))
    minimum=float('inf')
    for j in range(n):
        for k in range(j+1,n):
            ans=arr[j]+arr[k]+(k-j)
            if ans<minimum:
                minimum=ans
    print(minimum)