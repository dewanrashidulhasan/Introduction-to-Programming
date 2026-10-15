def uniq_pair(a,t):
    ans=[]
    seen=[]
    for i in range(len(a)):
        for j in range(i+1,len(a)):
            x=a[i]
            y=a[j]
            if x+y==t:
                is_pair=(min(x,y),max(x,y))
                if is_pair not in seen:
                    ans.append((x,y))
                    seen.append(is_pair)
    return ans
a=list(map(int,input().split()))
t=int(input())
print(*uniq_pair(a,t))