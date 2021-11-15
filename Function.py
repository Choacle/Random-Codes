def areaOfCircle(x):
    area = float(x) * float(x) * 3.14
    print("Area of circle is: ", area)
    return area
def factoriel(x):
    fact = 1
    while x > 1:
        fact = fact * x
        x = x - 1
    print("The factoriel is:    ", fact)
    return(fact)
def multiplyList(list):
    fact = 1
    for x in list:
        fact = fact * x
    print(fact)
    return fact

process = input("Write what you wanna do:   ")
if process == "area":
    r = int(input("please enter r:   "))
    areaOfCircle(r)
elif process == "factoriel":
    r = int(input("please enter the number: "))
    factoriel(r)
elif process == "array":
        r[1] = int(input)
        r[2] = int(input)
        r[3] = int(input)