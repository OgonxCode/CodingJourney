num1 = int(input("please input a number: "))
num2 = int(input("please enter a number higher than 0: "))


try:
    if(num2 == 0):
        print("error")
    else:
        myNum = num1 / num2
except ValueError:
    print("you entered a number lower than 0 Error")
try:
    print(myNum)
except:
    print("cannot print a denomomator of zerp")