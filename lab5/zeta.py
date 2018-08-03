"""
Created on Thu Aug  2 22:42:15 2018

@author: Shivansh
"""
import sys


def findZetaSum():
	x = int(sys.argv[1])
	n = int(sys.argv[2])
	
	answer = 0.000000
	for i in range(1, n):
#		print(answer)
		answer = answer + ((1/i)**x)
		i=i+1


	print("Z("+str(x)+") ="+str(answer)+" when approximated at n= "+str(n))
	 


findZetaSum();
