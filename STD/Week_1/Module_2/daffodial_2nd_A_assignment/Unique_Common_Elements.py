def uniq_common(a,b):
    arr=[]
    for i in a:
        if i in b and i not in arr:
            arr.append(i)
    return arr
a=list(map(int,input().split()))
b=list(map(int,input().split()))
print(uniq_common(a,b))