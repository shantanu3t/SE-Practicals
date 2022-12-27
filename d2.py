str1 = input("Enter the main string :")
def s1():
    long = []
    s = str1.split()
    for i in s:
        if(len(i) > len(long)):
            long = i
    print("Word with longest length is operations having length:", long)
def s2():
    d = input("Enter the character :")
    e = str1.count(d)
    print("Frequency of occurrence of character(s) in string (", d, ") is", e)
def s3():
    a = str1[::-1]
    if(a == str1):
        print(a, " string is an palindrome string")
    else:
        print(a, " string is not a palindrome string")
def s4():
    c = input("Enter the sub string to check : ")
    b = str1.find(c)
    #print("Main String :", str1);
    #print("Substring String :", c);
    print("Substring string found at index", b)
def s5():
    words = str1.split()
    words.sort()
    print(words)
    occ=1
    prev = words[0]
    for i in range(1, len(words)):
        if(words[i] != prev):
            print(prev, ":", occ)
            prev = words[i]
            occ = 1
        else:
            occ += 1
            print(prev, ":", occ)
    print(words[len(words)-1], ":", occ)
while(True):
    print("1 : Display word with longest length")
    print("2 : Determine the frequency of occurrence of particular character in the string")
    print("3 : Check whether given string is palindrome or not")
    print("4 : Display index of first appearance of the substring")
    print("5 : Count the occurrences of each word in a given string")
    print("6 : Exit")
    func = int(input("Enter your choice: "))
    if(func==1):
        p=s1()
    elif(func==2):
        q=s2()
    elif(func==3):
        r=s3()
    elif(func==4):
        s=s4()
    elif(func==5):
        t=s5()
    else:
        break
