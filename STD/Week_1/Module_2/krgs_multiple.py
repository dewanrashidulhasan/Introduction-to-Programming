# def full_name(first,last):
#     name=f'{first}{last}'
#     return name
# name= full_name('Alu','Kodu')
# print(name) 
# def famous_name(first,last,**additional):
#     name=f'{first}{last}'
#     print(additional)
#     return name
# name= famous_name(first='Alu',last='Kodu',additional='Khaba')

# print(name) 
def a_lot(num1,num2):
    sum=num1+num2
    mult=num1+num2
    remain=num1-num2
    # return [sum,mult,remain]
    return sum,mult,remain
everyting=a_lot(55,21)
print(everyting)