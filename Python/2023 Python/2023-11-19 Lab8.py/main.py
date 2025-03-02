# author: ariya kawamura
# date: 2023-11-18
# purpose is to collect the words of a txt file strip the punctuation and count the amount of unique words then
# convert it into astriks

def puncDestroyer(loremEpson):
    for char in ',.!':
        loremEpson = loremEpson.replace(char, '')
    return loremEpson

def wordSplit(lorenEpson):
    wordsOfloren = lorenEpson.split()
    return wordsOfloren

def wordCounter(splitWords):
    vitaeCount = 0
    ipsumCount = 0
    elitCount = 0
    sitCount = 0
    ametCount = 0
    feugiatCount = 0
    nuncCount = 0
    temporCount = 0
    sapienCount = 0

    for i in range(len(splitWords)):
        if splitWords[i].lower() == "vitae":
            vitaeCount += 1
        elif splitWords[i].lower() == "ipsum":
            ipsumCount += 1
        elif splitWords[i].lower() == "elit":
            elitCount += 1
        elif splitWords[i].lower() == "sit":
            sitCount += 1
        elif splitWords[i].lower() == "amet":
            ametCount += 1
        elif splitWords[i].lower() == "feugiat":
            feugiatCount += 1
        elif splitWords[i].lower() == "nunc":
            nuncCount += 1
        elif splitWords[i].lower() == "tempor":
            temporCount += 1
        elif splitWords[i].lower() == "sapien":
            sapienCount += 1

    return (vitaeCount, ipsumCount, elitCount, sitCount, ametCount, feugiatCount,
            nuncCount, temporCount, sapienCount)

def astrikCreator(vitaeCount, ipsumCount, elitCount, sitCount, ametCount
                  , feugiatCount, nuncCount, temporCount, sapienCount):
    vitaeArstrik = vitaeCount * "*"
    ipsumArstrik = ipsumCount * "*"
    elitArstrik = elitCount * "*"
    sitArstrik = sitCount * "*"
    ametArstrik = ametCount * "*"
    feugiaArstrik = feugiatCount * "*"
    nuncArstrik = nuncCount * "*"
    temporArstrik = temporCount * "*"
    sapienArstrik = sapienCount * "*"
    return (vitaeArstrik, ipsumArstrik, elitArstrik, sitArstrik, ametArstrik,
            feugiaArstrik, nuncArstrik, temporArstrik, sapienArstrik)

def astrikRemover(vitaeCount, ipsumCount, elitCount, sitCount, ametCount, feugiatCount,
     nuncCount, temporCount, sapienCount):
    if vitaeCount < 2:
        vitaeCount = 0
    if ipsumCount < 2:
        ipsumCount = 0
    if elitCount < 2:
        elitCount = 0
    if sitCount < 2:
        sitCount = 0
    if ametCount < 2:
        ametCount = 0
    if feugiatCount < 2:
        feugiatCount = 0
    if nuncCount < 2:
        nuncCount = 0
    if temporCount < 2:
        temporCount = 0
    if sapienCount < 2:
        sapienCount = 0
    return (vitaeCount, ipsumCount, elitCount, sitCount,
            ametCount, feugiatCount, nuncCount, temporCount, sapienCount)
def main():
    # opens datafile to extract data
    data = open("data.txt", 'r')
    loremEpson = data.read()

    # deletes all punctuations
    noPuncLoremEpson = puncDestroyer(loremEpson)

    # splits all words and assigns them to splitwords
    splitWords = wordSplit(noPuncLoremEpson)

    # initiates counter variables to count each unique word
    (vitaeCount, ipsumCount, elitCount, sitCount, ametCount, feugiatCount,nuncCount, temporCount, sapienCount) = wordCounter(splitWords)

    vitaeCount, ipsumCount, elitCount, sitCount, ametCount, feugiatCount, nuncCount, temporCount, sapienCount = astrikRemover(vitaeCount, ipsumCount, elitCount, sitCount, ametCount, feugiatCount, nuncCount, temporCount, sapienCount)

    # uses previous variables to convert the numbers into astriks for a visual repersentation
    (vitaeArstrik, ipsumArstrik, elitArstrik, sitArstrik, ametArstrik, feugiaArstrik, nuncArstrik, temporArstrik,
     sapienArstrik) = astrikCreator(vitaeCount, ipsumCount, elitCount, sitCount, ametCount,
                  feugiatCount, nuncCount, temporCount, sapienCount)

    output = open("output.txt",'w')

    if vitaeCount > 0:
        output.write("Vitae:" + vitaeArstrik + "\n")
        print("Vitae:", vitaeArstrik)
    if ipsumCount > 0:
        output.write("Ipsum: " + ipsumArstrik + "\n")
        print("Ipsum:", ipsumArstrik)
    if elitCount > 0:
        output.write("Elit:" + elitArstrik + "\n")
        print("Elit:" + elitArstrik)
    if sitCount > 0:
        output.write("Sit: " + sitArstrik + "\n")
        print("Sit:", sitArstrik)
    if ametCount > 0:
        output.write("Amet:" + ametArstrik + "\n")
        print("Amet:", ametArstrik)
    if feugiatCount > 0:
        output.write("Feugia:" + feugiaArstrik + "\n")
        print("Feugiat:", feugiaArstrik)
    if nuncCount > 0:
        output.write("Nunc:" + nuncArstrik + "\n")
        print("Nunc:", nuncArstrik)
    if temporCount > 0:
        output.write("Tempor:" + temporArstrik + "\n")
        print("Tempor:", temporArstrik)
    if sapienCount > 0:
        output.write("Sapien:" + sapienArstrik + "\n")
        print("Sapien:", sapienArstrik)

    output.close()
    data.close()

main()