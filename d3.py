A=[[0,0],
   [0,0]]
B=[[0,0],
   [0,0]]
for i in range(len(A)):
    for j in range(len(A)):
        A[i][j]=int(input("Enter the elements:"))
for i in range(len(B)):
    for j in range(len(B)):
        B[i][j]=int(input("Enter the elements:"))
c=[[0,0],[0,0]]
for i in range(len(A)):
 for j in range (len(A)):
   c[i][j]=A[i][j]+B[i][j]
print("Addition of two matrix is:",c)
for i in range(len(A)):
 for j in range(len(A)):
   c[i][j]=A[i][j]-B[i][j]
print("Subtraction of two matrix is:",c)
for i in range(len(A)):
 for j in range(len(A)):
   for k in range(len(A)):
     c[i][j] += A[i][k]*B[k][j]
print("Multiplication of two matrices is: ",c)
for i in range (len(A)):
 for j in range(len(A)):
   c[i][j]=A[j][i]
print("Transpose of matrix A is: ",c)
for i in range(len(B)):
 for j in range(2):
   c[i][j]=B[j][i]
print("Transpose of matrix B is :",c)

