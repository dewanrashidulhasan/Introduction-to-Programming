def find_mode(n):
    if not n:
        return None
    freq={}
    for i in n:
        if i in freq:
            freq[i]+=1
        else:
            freq[i]=1
    mx_freq=0
    mode=[]
    for i, cnt in freq.items():
        if cnt> mx_freq:
            mx_freq=cnt
            mode=[i]
        elif cnt==mx_freq:
            mode.append(i)
    if len(mode)==1:
        return mode[0]
    return mode

n=list(map(int,input().split()))
print(find_mode(n))