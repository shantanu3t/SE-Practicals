def l_search(p, n, list1):
    c = 0
    for i in range(n):
        if (list1[i] == p):
            print("Roll Number %d did attend the training program." % (p))
            break
        else:
            c = c+1
    if (c == n):
        print("Roll Number %d did not attend the training program." % (p))


def s_search(p, n, list1):
    k = 0
    for i in range(n+1):
        if (list1[i] == p):
            k = i
            break
    if (k == n):
        print("Roll Number %d did not attend the training program." % (p))
    elif (k < n):
        print("Roll Number %d did attend the training program." % (p))


def b_search(p, list1, h, l):
    mid = int((h+l)/2)
    if (p == list1[mid]):
        return mid
    elif (p < list1[mid]):
        return b_search(p, list1, mid-1, l)
    else:
        return b_search(p, list1, h, mid+1)


def fibMonaccianSearch(list1, p, n):
    fim2 = 0
    fim1 = 1
    fibM = fim2 + fim1
    while (fibM < n):
        fim2 = fim1
        fim1 = fibM
        fibM = fim2 + fim1
        offset = -1
    while (fibM > 1):
        i = min(offset+fim2, n-1)
        if (list1[i] < p):
            fibM = fim1
            fim1 = fim2
            fim2 = fibM - fim1
            offset = i
        elif (list1[i] > p):
            fibM = fim2
            fim1 = fim1 - fim2
            fim2 = fibM - fim1
        else:
            return i
    if (fim1 and list1[n-1] == p):
        return n-1
        return -1


list1 = []
n = int(input("Enter the number of students who attended the program:"))
for i in range(n):
    m = int(input("Enter roll no.%d :" % (i+1)))
    list1.append(m)
p = int(input("\nEnter the key:"))
print("Menu: \n1.Linear Search\n2.Sentinal Search\n3.Binary Search\n4.FibonacciSearch\n5.Exit")
while (1):
    s = int(input("\nChoose your option:"))
    if (s == 1):
        print("\nLinear Search:")
        l_search(p, n, list1)
    elif (s == 2):
        print("\nSentinal Search:")
        list1.append(p)
        s_search(p, n, list1)

    elif (s == 3):
        print("\nBinary Search:")
        l = 0
        h = n-1
        x = b_search(p, list1, h, l)
        print("Roll Number %d did attend the program and its index is %d." % (p, x))
    elif (s == 4):
        print("\nFibonacci Search")
        ind = fibMonaccianSearch(list1, p, n)
        if (ind >= 0):
            print("Student did attend the program at index:", ind)
        else:
            print(p, "isn't present in the array")
    elif (s == 5):
        print("\Exit")
        break
    else:
        print("Invalid Option!")
