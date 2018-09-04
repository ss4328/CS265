import sys


def matrixMultiply():
    print("Welcome to Matrix Multiply")
    inputFromUser= input("Enter the size of the Matrix")
    
    size = int(inputFromUser)
    mat1 = [[0]*5 for i in range(size)]
    mat2 = [[0]*5 for i in range(size)]
    ans = [[0]*5 for i in range(size)]
    
    for i in range(size):
        for j in range(size):
            inputMSG = "Enter the value for position A["+str(i)+"]["+str(j)+"]: "
            inputForMatrixValue = input(inputMSG)
            value = int(inputForMatrixValue)
            mat1[i][j] = value

    for i in range(size):
        for j in range(size):
            inputMSG = "Enter the value for position B["+str(i)+"]["+str(j)+"]: "
            inputForMatrixValue = input(inputMSG)    
            value = int(inputForMatrixValue)
            mat2[i][j] = value

    for row in range(size):
        for column in range(size):
            for row2 in range(size):
                ans[row][column] += mat1[row][row2]*mat2[row2][column]
    
    for i in range(size):
        for j in range(size):
            print("element ans["+str(i)+"]["+str(j)+"]" + str(ans[i][j]))
	
matrixMultiply();

