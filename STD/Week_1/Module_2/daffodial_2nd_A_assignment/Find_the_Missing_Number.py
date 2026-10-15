def missing_sum(num,n):
    except_sum=n*(n+1)//2
    actual_sum=sum(num)
    return except_sum-actual_sum
def missing_loop(num,n):
    for i in range(1,n+1):
        if i not in num:
            return i
    return None
num=list(map(int,input().split()))
n=int(input())
print("Sum:",missing_sum(num,n))
print("Loop:",missing_loop(num,n))