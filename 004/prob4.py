#Project Euler Problem 4
#Find the largest palindrome made from the product of two 3-digit numbers.

def isPalindromic(checkMe):
	reversedCheckMe = ""
	forwardCheckMe = str(checkMe)
	
	for i in range(0, len(forwardCheckMe)):
		reversedCheckMe = forwardCheckMe[i] + reversedCheckMe
	
	return forwardCheckMe == reversedCheckMe

a = 999
b = 999
highest = 0

while a > 0:
	while b > 0:
		if (isPalindromic(a * b) and a * b > highest): 
			highest = a * b
		b -= 1
	a -= 1
	b = a

print highest
