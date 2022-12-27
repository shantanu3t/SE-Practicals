
list0=["om","adi","vedang","vivek","rahul","virat","rohit","messi","ronaldo"]
list1=["om","adi","vedang","vivek"]          #cricket
list2=["rahul","virat","rohit","om"]         #badminton
list3=["messi","ronaldo","vivek"]            #football
r1=[]
r2=[]
r3=[]
r4=[]
r5=[]
r6=[]
def fun1():
     for i in list1:
         if i in list2:
                 r1.append(i)
     print(r1)
fun1()


def func2():
        
     for i in list1:
         if i not in list2:
             r2.append(i)

     for j in list2:
         if j not in list1:
            r2.append(j)
            
     print(r2)
func2()


def func3():
    r3=list1+list2

    for i in list0:
        if i not in r3:
            r4.append(i)
    print(len(r4))
func3()


def func4():
    for i in list1:
        if i not in list2:
           # if i not in list3:
                r5.append(i)
    for j in list3:
        if j not in list2:
             if j not in list1:
                 r5.append(j)
    print(r5)
    print(len(r5))    

                
func4()    
     
