class Martices:
    def __init__(self,a,b):
        self.a = a
        self.b = b
    def display (self,c,m):
        print("resultant matrix is: ")
        for i in range(m):
            print(c[i],end=" \n")
            
    def add(self,c):
        for i in range(0,m):
            for j in range(0,n):
                c[i][j]=a[i][j]+b[i][j]
    def sub(self,c):
        for i in range(0,m):
            for j in range(0,n):
                c[i][j] = a[i][j] - b[i][j]
    def mul(self,c):
        for i in range(0,m):
            for i in range(0,p):
                for i in range(0,n):
                    c[i][j] += a[i][j] * b[i][j]
    def trans_mat(self,c):
        for i in range(0,m):
            for j in range(0,n):
                c[j][i]=a[i][j]
    
if __name__=='__main__':
    m=int(input("Enter the no of rows for Matrix 1: "))
    n=int(input("Enter the no of columns for Matrix 1: "))

    a=[[0 for j in range(0,n)]for i in range(0,m)]

    print('enter element of matrix A ')
    for i in range(0,n):
        for j in range(0,m):
            a[i][j]=int(input(f"enter the element A{i}{j}:".format(i,j)))


    p=int(input("Enter the no of rows for Matrix 2: "))
    q=int(input("Enter the no of columns for Matrix 2: "))

    b=[[0 for j in range(0,q)] for i in range(0,q)]

    print('Enter element of matrix B ')
    for i in range(0,p):
        for j in range(0,q):
            b[i][j]=int(input(f"Enter the element B{i}{j}:".format(i,j)))
    obj = Martices(a,b)
    var=1

    while var!='0':
        print('1.Add Matrices\n2.subtract Matrices\n3.multiply Matrices\n4.transpose\n5.Exit')
        choice=int(input("Enter the choice"))
        if choice==1:
            if m==p and n==q:
                print("Matrices can be Added")
                c=[[0 for j in range(0,n)] for i in range(0,m)]
                obj.add(c)
                obj.display(c,m)
            else:
                print("matrices cannot be added")
        if choice==2:
            if m==p and n==q:
                print("Matrices can be subtracted")
                c=[[0 for j in range(0,n)] for i in range(0,m)]
                obj.sub(c)
                obj.display(c,m)
            else:
                print("matrices cannot be subtracted")
        if choice==3:
            if m==p:
                print("Matrices can be multiplied")
                c=[[0 for j in range(0,q)] for i in range(0,m)]
                obj.mul(c)
                obj.display(c,m)
            else:
                print("matrices cannot be multiplied")
        if choice==4:
            c=[[0 for j in range(0,n)] for i in range(0,m)]
            obj.trans_mat(c)
            obj.display(c,m)
            print()
            
        if choice>4 or choice<1:
            print("\nPlease enter the valid choice")
            var=(int(input("\n Do you want to continue?(press 0 to stop)")))
            if (var==0):
                break
                

