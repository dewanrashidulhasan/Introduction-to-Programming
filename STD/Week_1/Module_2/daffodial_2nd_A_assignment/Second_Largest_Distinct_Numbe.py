def second_larg(numbers):
    largest=None
    second=None

    for i in numbers:
        if largest is None or i>largest:
            second=largest
            largest=i
        elif i!=largest:
            if second is None or i>second:
                second=i
    return second

numbers=list(map(int,input().split()))
if second_larg(numbers) is None:
    print("None")
else : print(second_larg(numbers))