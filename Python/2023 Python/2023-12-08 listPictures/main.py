def  processList():
    list = [1,2,3,4,5,6,7,8,9,10]
    list.append(20)
    sliced2 = list[1::7]
    sliced3 = list[2:3]

    return sliced2, sliced3

def tuples():
     tupleOperation = [1,2,3,4,5,25]
     for i in tupleOperation:
         if tupleOperation[i] == 25:
             return True

     return False


def main():
    with open("append.txt", 'a') as file:
        print(processList())
        tuplescheck = tuples()
        if tuplescheck == True:
            file.write("25 is in this array")
        else:
            file.write("25 is not in this array ")

        file.close()
        print(file.readLine())
        file.close()





main()