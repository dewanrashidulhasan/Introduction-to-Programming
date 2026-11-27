n=int(input())
arr=list(map(int,input().split()))
cnt=0
while True:
    is_even=True
    for i in arr:
        if i%2!=0:
            is_even=False
            break
    if not is_even:
        break
    for i in range(n):
        arr[i]=arr[i]//2
    cnt+=1
print(cnt)