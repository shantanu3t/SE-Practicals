# both cricket and badminton
def CriandBad(a,b):
    GroupCriBad=[]
    for item in a:
        if(item in b):
            item.append(GroupCriBad)
    print(GroupCriBad)

# either cricket or badminton but not both
def CriorBadnotboth(a,b):
    GroupCriorBadnotboth=[]
    for item in a:
        if(item not in b):
            item.append(GroupCriorBadnotboth)
    for item in b:
        if(item not in a and item not in GroupCriorBadnotboth):
            item.append(GroupCriorBadnotboth)
    print(GroupCriorBadnotboth)

# Only foot ball
def onlyfootball(a,b,c):
    GroupOnlyFootball=[]
    for item in a:
        if(item not in b and item not in c):
            GroupOnlyFootball.append(item)
    print(len(GroupOnlyFootball))


# cricket and football but not badminton
def CriandFootnotBad(a,b,c):
    GroupCriandFootnotbad=[]
    for item in a:
        if(item in b and item not in c):
            GroupCriandFootnotbad.append(item)
    print(len(GroupCriandFootnotbad))

    
if __name__=='__main__':
    GroupACri=[]
    GroupBBad=[]
    GroupCFoot=[]
    choice=0
    while(choice!=5):

        print('''\n
                    ********MENU**********
                1. Enter the information of student
                2. List of student who plays both cricket and badminton 
                3. List of student who plays cricket or badminton but not both
                4. Number of student who plays neither cricket not badminton
                5. Number of student who plays cricket and football not badminton 
                6. Exit\n
            ''')
        choice=int(input("Enter your choice :"))
        if(choice==1):
            GroupA=int(input("\nEnter the no of student in group A :"))
            for i in range(GroupA):
                a=int(input("Enter the roll no of student :"))
                GroupACri.append(a)

            GroupB=int(input("\nEnter the no of student in group B :"))
            for i in range(GroupB):
                a=int(input("Enter the roll no of student :"))
                GroupBBad.append(a)

            GroupC=int(input("\nEnter the no of student in group C :"))
            for i in range(GroupC):
                a=int(input("Enter the roll no of student :"))
                GroupCFoot.append(a)
        elif(choice==2):
            print("Student who plays both cricket and badminton :",CriandBad(GroupACri,GroupBBad))

        elif(choice==3):
            print("Student who plays cricket or badminton but not both :",CriorBadnotboth(GroupACri,GroupBBad))
    
        elif(choice==3):
            print("Number of student who plays neither cricket not badminton :",onlyfootball(GroupCFoot,GroupACri,GroupBBad))

        elif(choice==4):
            print("Number of student who plays cricket and football not badminton ",CriandFootnotBad(GroupACri,GroupCFoot,GroupBBad))
        elif(choice==5):
            break
        else:
            print("Invalid")
    
 