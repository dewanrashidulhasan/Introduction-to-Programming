st,end=map(int,input().split())
for x in range(st,end+1):
    if x%2==0:
        print(x,'Even')
    else:
        print(x,"Odd")