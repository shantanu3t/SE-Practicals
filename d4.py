def linear_Search(list1,target):
    for i in range(len(list1)):
        if(list1[i]==target):
            return i
    return -1

def sentinel_Search(list1,target):
    ln=len(list1)
    if(list1[ln-1]==target):
        return ln-1
    else:
        for i in range(ln):
            if(list1[i]==target):
                return i
    return -1

def binary_Search(list1,target):
    start=0
    end=len(list1)-1
    while(start<=end):
        mid=end+start//2
        if(list1[mid]==target):
            return mid
        elif(list1[mid]>target):
            end=mid-1
        elif(list1[mid]<target):
            start= mid+1
    
    return -1


if __name__=='__main__':
    print('''
            *************Menu***********
    
            1. Enter list
            2. Linear search
            3. Sentinel search
            4. Binary search
            5. Fibonnaci search
            6. break
            ''')
    option =0
    lis=[1,2,3,4,5,6,7,8]

    while(option!=6):
        option=int(input("Enter the option: "))


        if(option==1):
            leng=int(input("Enter the length of string: "))
            for i in range(leng):
                l=int(input(f"Enter the {i}th element :"))
                lis.append(l)

    
        elif(option==2):
            target=int(input("Enter the target: "))
            if(linear_Search(lis,target)==-1):
                print("Element not found")
            else:
                print(f"Element on {linear_Search(lis,target)} this position") 

        elif(option==3):
            target=int(input("Enter the target: "))
            if(sentinel_Search(lis,target)==-1):
                print("Element not found")
            else:
                print(f"Element on {sentinel_Search(lis,target)} this position") 

        elif(option==4):
            target=int(input("Enter the target: "))
            if(binary_Search(lis,target)==-1):
                print("Element not found")
            else:
                print(f"Element on {binary_Search(lis,target)} this position") 
                
        elif(option==4):
            target=int(input("Enter the target: "))
            if(binary_Search(lis,target)==-1):
                print("Element not found")
            else:
                print(f"Element on {binary_Search(lis,target)} this position") 

        