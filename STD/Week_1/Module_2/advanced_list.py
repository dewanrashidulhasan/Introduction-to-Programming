num=list(map(int,input().split()))
even,odds=[],[]
# for n in num:
#     if n%2==1 and n%5==0:
#         odds.append(n)
#     else: even.append(n)
# print(f"{odds}\n{even}")
odd_num=[n for n in num if n%2==1 if n%5==0]
print(odd_num)