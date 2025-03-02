myString = "Hello. its me your waiting for"
case = "WAITING"



firstSentence = ""
secondSentence = ""
indexPeriod = -1

for i in range(len(myString)):
    found = False
    if myString[i] == "." and not found:
        found = True
        indexPeriod = i


firstSentence = myString[0:indexPeriod+1]
secondSentence = myString[indexPeriod+2:len(myString)]

print(firstSentence)
print(secondSentence)