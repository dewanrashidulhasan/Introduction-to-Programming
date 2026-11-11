def get_numbers():
    numbers=list(map(int, input().split()))
    return numbers

def functions(numbers):
    highest = max(numbers)
    lowest = min(numbers)

    print(f"{highest}\n{lowest}")

if __name__=="__main__":
    numbers = get_numbers()

    functions(numbers)
