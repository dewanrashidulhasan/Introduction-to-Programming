n= list(map(int,input().split()))
largest=n[0]
for i in n:
    if i>largest:
        largest=i
print(largest)