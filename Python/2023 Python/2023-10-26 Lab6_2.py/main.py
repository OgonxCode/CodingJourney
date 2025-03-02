# ariya kawamura
# author: 2023-10-26
# purpose is to get the user to guess whats in the binary list and returns if it is or not but this is all used with
# recursion

binaryList = [0, 4, 6, 35, 36, 44, 46, 50, 51, 53, 54, 59, 63, 67, 68, 80, 83, 85, 91, 96]

targetNumber = int(input("please enter a target number: "))

# makes binary search funciton
def recursiveBinarySearch(listToSearch, targetNumber, startIndex=0,endIndex=None):
    # if there's no endindex it set it to the last index of the list
    if endIndex is None:
        endIndex = len(listToSearch) - 1
    # Check the elements
    if endIndex >= startIndex:
        middleIndex = (startIndex + endIndex) // 2
        middleNumber = listToSearch[middleIndex]

        # check if targetNumber is in the middle
        if targetNumber == middleNumber:
            return middleIndex
        # if targetNumber is smaller search left side
        elif targetNumber < middleNumber:
            return recursiveBinarySearch(listToSearch,targetNumber, startIndex, middleIndex - 1)
        # if target is larger search right side
        else:
            return recursiveBinarySearch(listToSearch, targetNumber, middleIndex + 1, endIndex)
    else:
        # if no elements are left to check returns -1
        return -1

result = recursiveBinarySearch(binaryList, targetNumber)
if result != -1:
    print("Target number found at index: ", result)
else:
    print("Target number not found in the list.")
