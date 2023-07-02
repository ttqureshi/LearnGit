def sum(a,b):
    return int(a) + int(b)

flag = True
while (flag):
    a = input("Enter first number: ")
    b = input("Enter second number: ")
    s = sum(a,b)
    print(f"Sum = {s}")
    e = input("If you want to exit press \'e\'")
    if e=="e":
        flag = False