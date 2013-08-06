#Project Euler Problem 1
#Add all the natural numbers below one thousand that are multiples of 3 or 5.

def isMultipleOf3or5(checkMe):
	returnValue = False
	
	if checkMe % 3 == 0 or checkMe % 5 == 0:
		returnValue = True
	
	return returnValue


i = 0
sum = 0

while i < 1000:
	if isMultipleOf3or5(i):
		sum += i
	
	i += 1

print sum
