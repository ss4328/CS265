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

	for i in range(size):
                for j in range(size):
                        ans[i][j] = mat1[i][j] * mat2[i][j]
	
	for i in range(size):
		for j in range(size):
			print("element is: " + str(ans[i][j]))
	
matrixMultiply();
