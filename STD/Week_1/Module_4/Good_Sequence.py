n=int(input())
arr=list(map(int,input().split()))
freq,cnt={},0
for i in arr:
    if i in freq:
        freq[i]+=1
    else: freq[i]=1
for i in freq:
    if freq[i]<i:
        cnt+=freq[i]
    else: cnt+=freq[i]-i
print(cnt)