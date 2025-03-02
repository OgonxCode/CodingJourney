array = ['sad','happy','angry','confused']
sizeOfArray = len(array)


def linePrinter(Size):
    if Size == 0:
        return print('no more to print')
    else:
         print(array[Size - 1])
         linePrinter(Size -1)

print(sizeOfArray)
linePrinter(sizeOfArray)