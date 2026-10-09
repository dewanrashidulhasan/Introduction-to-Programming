n= list(map(int,input().split()))
for i in n:
    if i>0:
        print(i,"Positive")
    elif i<0:
        print(i,"Negative")
    else: 
        print(i,"Zero")