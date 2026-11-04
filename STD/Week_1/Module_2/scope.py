blance= int(input())
def by_things(item,price):
    global blance
    print(f'previous balance',blance)
    blance-=price
    print(f'blance after buying{item}',blance)
    
by_things(' sunglass',1000)
# print(f'Global balance after buy',blance)
