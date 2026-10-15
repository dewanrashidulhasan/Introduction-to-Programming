def is_palindrom(num):
    n=len(num)
    for i in range(n//2):
        if num[i]!=num[n-1-i]:
            return False
    return True
num=list(map(int,input().split()))
print(is_palindrom(num))
    