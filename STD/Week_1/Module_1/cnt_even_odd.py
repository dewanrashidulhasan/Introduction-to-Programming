st,end=map(int,input().split())
cnt_even= cnt_odd=0
for x in range(st,end+1):
    if x%2==0:
        cnt_even+=1
    else:
        cnt_odd+=1
print("Even",cnt_even)
print("Odd",cnt_odd)