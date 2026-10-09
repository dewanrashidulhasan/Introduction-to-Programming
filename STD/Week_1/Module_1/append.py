n= list(map(int,input().split()))
even_n=[]
odd_n=[]
for i in n:
    if i%2==0:
        even_n.append(i)
    else: odd_n.append(i)
print(odd_n)
print(even_n)