def wordWithLonLen(str1):
    list1=str1.split(" ")
    str2=""
    for i in range(len(list1)):
        if(len(list1[i])>len(str2)):
            str2=list1[i]
    return str2

def freqofoccur(str1):
    count=0
    char=input("Enter the character: ")
    for i in range(len(str1)):
        if(str1[i]==char):
            count=count+1
    return count

def check_palindrome(str1):
    i=0
    j=len(str1)-1
    while(i<=j):
        if(str1[i]!=str1[j]):
            return 0
        i+=1 
        j-=1
    return 1

def firapp(str1):
    str2=input("Enter the substring: ")
    return str1.find(str2)

def wordocc(str1):
    count=0
    dict={}
    list1=str1.split(" ")
    for i in range(len(list1)):
        for j in range(len(list1)):
            if(list1[i]==list1[j]):
                count+=1
        dict[list1[i]]=count
    return dict


if __name__=='__main__':
    str=""
    print('''
            *************Menu***********
    
            1. Enter String
            2. Display word with the longest length
            3. Determines the frequency of occurrence of particular character in the string
            4. Check whether given string is palindrome or not
            5. Display index of first appearance of the substring
            6. Count the occurrences of each word in a given string
            7. Break
            ''')
    option =0
    str1=""
    while(option!=7):
        option=int(input("Enter the option: "))
        if(option==1):
            str1=input("Enter the string: ")
    
        elif(option==2):
            if(len(str1)==0):
                print("First enter the string")
            else:
                print(wordWithLonLen(str1)) 

        elif(option==3):
            if(len(str1)==0):
                print("First enter the string")
            else:
                print(freqofoccur(str1)) 
                
        elif(option==4):
            if(len(str1)==0):
                print("First enter the string")
            else:
                if(check_palindrome(str1)):
                    print("Given string is palindrome")
                else:
                    print("Given string is not palindrome")
        elif(option==5):
            if(len(str1)==0):
                print("First enter the string")
            else:
                print(firapp(str1)) 
        elif(option==6):
            if(len(str1)==0):
                print("First enter the string")
            else:
                print(wordocc(str1)) 

