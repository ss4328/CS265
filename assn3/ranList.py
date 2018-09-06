import random
import sys

if len(sys.argv)!=2:
    print("Please enter the size of test numbers as command line inputs.")
    sys.exit(0)
#print("Size: "+str(sys.argv[1]))
size = int(sys.argv[1])
#random.seed(sys.argv[2])
print(size)
for i in range(0, size):
    print(random.randint(0, 1000000))
