#Project Euler Problem 5
#What is the smallest number divisible by each of the numbers 1 to 20?
found = False
maxOfRange = 10
i = maxOfRange

while not found:
	j = int(maxOfRange / 2)
	valid = True
	
	while valid and j < maxOfRange:
		j += 1
		if i % j != 0: valid = False
	
	if valid: 
		found = True
	else:
		i += 1

print i
