a,b=map(int,input().split())
lucky=[]
for i in range(a,b+1):
    is_lucky=True
    for j in str(i):
        if j!='4' and j!='7':
            is_lucky=False
            break
    if is_lucky:
        lucky.append(i)
if lucky:
    print(*lucky)
else:
    print(-1)