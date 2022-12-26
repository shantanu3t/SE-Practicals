def selection_sort(lis, size):
    for i in range(size):
        mainIndex=i
        for currIndex in range(i+1,size):
            if(lis[mainIndex]>lis[currIndex]):
                mainIndex=currIndex
        (lis[i],lis[mainIndex])=(lis[mainIndex], lis[i])

def bubble_sort(lis,size):
    for i in range(size-1):
        for j in range(size-i-1):
            if(lis[j]>lis[j+1]):
                (lis[j],lis[j+1])=(lis[j+1],lis[j])

if __name__=='__main__':
    print('''
            *************Menu***********
    
            1. Enter list
            2. Print list
            3. Selection sort
            4. Bubble sort
            5. Break
            ''')
    option =0
    lis=[7,35,1345,134,5,45,5634,352,52,5215,1,2,3,4,5,6,7,8]

    while(option!=4):
        option=int(input("Enter the option: "))


        if(option==1):
            leng=int(input("Enter the length of string: "))
            for i in range(leng):
                l=int(input(f"Enter the {i}th element :"))
                lis.append(l)

        elif(option==2):
            for items in lis:
                print(items,end=" ")
            print()

        elif(option==3):
            selection_sort(lis, len(lis))
            
        elif(option==4):
            bubble_sort(lis, len(lis))