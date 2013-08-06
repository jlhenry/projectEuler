import primes

numberIn = 600851475143

#get primes less than x
primes = primes.SieveOfEratosthenes(int(numberIn**0.5))

#traverse the list of primes and 
#determine which primes are factors of x
i = len(primes) - 1
primeFound = False

while i >= 0 and primeFound == False:
	if numberIn % primes[i] == 0:
		largestPrimeFactorial = primes[i]
		primeFound = True
	
	i -= 1

print largestPrimeFactorial

