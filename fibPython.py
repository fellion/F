def getFibNumCycle (number, value = 1, beforeValue = 1, counter = 0, buffValue = 0):

    while number != counter:

        buffValue = value
        value = beforeValue + value
        beforeValue = buffValue

        if value % 2 == 0:
            print (value)
            counter += 1

def getFibNumRecursion (number, value = 1, beforeValue = 1, counter = 0):

    buffValue = 0

    if value % 2 == 0:
        print (value)
        counter += 1

    buffValue = value
    value = beforeValue + value
    beforeValue = buffValue
    
    if counter != number:
        getFibNumRecursion(number, value, beforeValue, counter)

getFibNumCycle(10)
getFibNumRecursion(10)