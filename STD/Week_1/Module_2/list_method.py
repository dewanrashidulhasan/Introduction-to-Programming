# from Built_in_functions_and_import_modules import get_numbers 
# nm=get_numbers()
nm=list(map(int,input().split()))
if 98 in nm:
    nm.remove(98)
print(nm)
 