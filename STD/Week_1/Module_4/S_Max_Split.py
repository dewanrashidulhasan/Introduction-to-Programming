s=input().strip()
split=[]
blance=start=0
for i,char in enumerate(s):
    if char=='L':
        blance+=1
    else:
        blance-=1
    if blance==0:
        split.append(s[start:i+1])
        start=i+1
print(len(split))
for i in split:
    print(i)
