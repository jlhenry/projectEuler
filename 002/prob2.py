#Project Euler Prolem 2
#By considering the terms in the Fibonacci sequence whose values do 
#not exceed four million, find the sum of the even-valued terms.

def getFibonacciSequence():
	fib = [1, 2]
	
	while fib[len(fib)-1]+fib[len(fib)-2] < 4000000:
		fib.append(fib[len(fib)-1]+fib[len(fib)-2])
	
	return fib

def isEven(checkMe):
	returnValue = False
	
	if checkMe % 2 == 0:
		returnValue = True
	
	return returnValue

fib = getFibonacciSequence()
sum = 0
i = 0

while i < len(fib):
	if isEven(fib[i]):
		sum += fib[i]
	
	i += 1

print sum
