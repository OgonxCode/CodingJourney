#opening
chapter6 = open("C:\\Users\\ariya\\Downloads\\Chapter 06.zip\\Chapter 06\\philosophers.txt", 'r')
# writing
line = chapter6.readline()
while line != '':
    print(line,end="")
    line = chapter6
# closing
chapter6.close()
