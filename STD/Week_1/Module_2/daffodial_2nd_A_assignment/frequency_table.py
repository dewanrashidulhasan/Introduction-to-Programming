def freq_table(n):
    freq={}
    for i in n:
        if i in freq:
            freq[i]+=1
        else:
            freq[i]=1
    return freq
n=list(map(int, input().split()))
x=freq_table(n)
print(",".join(f"{i}: {j}"for i, j in x.items()))