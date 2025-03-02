def calFac(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * calFac(n - 1)

def fibonacci(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fibonacci(n - 1) + fibonacci(n - 2)





def main():
    nonNeg = 9
    factoral = calFac(nonNeg)
    fib = fibonacci(nonNeg)
    print("factorial is: " + str(factoral))
    print("fibonacci is: " + str(fib))



main()