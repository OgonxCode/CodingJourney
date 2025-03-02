# 2023-10-04 Ariya Kawamura this program will display all prime numbers and sum the total in the end
# prime numbers = 2,3,5,7,9,11...
import math

userNum = int(input("please input a number greater than 2: "))
i = 2
sqrtChecker = userNum / i
decChecker = sqrtChecker.__floor__()

primeArray = []

while math.sqrt(i) <= userNum:
    if sqrtChecker == decChecker:
        primeArray.append(sqrtChecker)
        i = i + 1
    else:
        i = i + 1

print(primeArray)




