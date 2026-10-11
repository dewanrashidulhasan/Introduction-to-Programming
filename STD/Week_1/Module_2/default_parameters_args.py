# def sum(num1,num2):
#     result=num1+num2
#     return result

# total = sum(99,77)
# print(total)

#args

# def all_sum(num1,num2,*numbers):
#     print(numbers)
#     sum=0
#     for i in numbers:
#         print(i)
#         sum+=i
#     return sum

# total=all_sum(45,46, 89, 32, 76)
# print(total)

# def do_a_lot(*args):
#     print(args)


# def calculate(*args):
#     total = 0

#     for i in args:
#         total += i

#     print(total)

# calculate(10, 20, 30)


# def calculate(*args):
#     total = 0

#     for i in args:
#         total += i

#     print(total)


# numbers = list(map(int, input().split()))
# calculate(*numbers)


# def calculate(*args):
#     total=10
#     for i in args:
#         total+=i
#     print(total)
# calculate(5,15)

# def calculate(*args):
#     total=0
#     for i in args:
#         total+=i
#     return total
# result=calculate(2,3,5)
# print(result+10)


def calculate(*args):
    total=0
    for i in args:
        if i>10:
            return total
        total+=i
    return total
numbers=list(map(int, input().split()))
print(calculate(*numbers))


# def all_sum(num1,num2,*numbers):
    # print(numbers)
#     sum=0
#     for i in numbers:
#         print(i, end=" ")
#         sum+=i
#     return sum
# numbers= list(map(int,input().split()))
# total=all_sum(*numbers)
# print(total)

# def do_a_lot(*args):
    # print(args)
    # print(args,end=" ")