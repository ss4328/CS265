#Mark Boady
#CS265: Drexel University 2018

def make_array(size):
	return [x for x in range(0,size)]

def binary_search(target,A,start,stop):
	if start > stop:
		return False
	middle = start+(stop-start)//2
	if A[middle]==target:
		return True
	if A[middle] > target:
		return binary_search(target,A,start,middle-1)
	return binary_search(target,A,middle+1,stop)

def linear_search(target,A,start,stop):
	for i in range(start,stop+1):
		if A[i]==target:
			return True
		if target < A[i]:
			return False
	return False

def test_search(size,f):
	A = make_array(size)
	found,failed=0,0
	planned=size//10
	for i in range(-1*planned,planned+size):
		if(f(i,A,0,len(A)-1)):
			found+=1
		else:
			failed+=1
	tests=found+failed
	print("Ran",tests,"tests.")
	print("Found",found,"out of",tests,"targets.")
	print("Missing",failed,"out of",2*planned,"targets.")
	print("Found Success Rate:",str(found/size*100)+"%")
	print("Missing Success Rate:",str(failed/(2*planned)*100)+"%")

