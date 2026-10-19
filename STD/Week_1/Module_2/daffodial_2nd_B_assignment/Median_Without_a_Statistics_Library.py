def median(n):
    if not n:
        return None
    sort=sorted(n)
    leng=len(sort)
    mid=leng//2
    if leng%2==1:
        return sort[mid]
    else:
        return(sort[mid]+sort[mid-1])/2
n=list(map(int,input().split()))
print(median(n))