def running_avg(n):
    ans=[]
    sum=0
    for i in range(len(n)):
        sum+=n[i]
        avg=sum/(i+1)
        ans.append(avg)
    return ans
n=list(map(int,input().split()))
print(running_avg(n))