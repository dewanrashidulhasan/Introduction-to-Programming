def duplicates(n):
    unic_val_idx=0
    for i in range(len(n)):
        x=n[i]
        is_duplicate=False
        for j in range(unic_val_idx):
            if n[j]==x:
                is_duplicate=True
                break
        if is_duplicate==False:
            n[unic_val_idx]=x
            unic_val_idx+=1
    del n[unic_val_idx:]
    return n
n=list(map(int,input().split()))
print(duplicates(n))