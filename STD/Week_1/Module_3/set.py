# numbers=list(map(int,input().split()))
# numbers_set=set(numbers)
# print(numbers_set)

x=list(map(int,input().split()))
y=list(map(int,input().split()))
a,b=set(x),set(y)
print(a&b)
print(a|b)
