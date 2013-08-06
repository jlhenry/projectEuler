#pskept's prime number library

import math

#Prime number check using trial division
def isPrime_TD(checkMe):
        returnValue = True
        i = 2

        if checkMe <= 1:
                returnValue = False

        while i <= math.sqrt(checkMe) and returnValue == True:
                if checkMe % i == 0:
                        returnValue = False

                i += 1

        return returnValue

#Prime numbers up to value using the Sieve of Eratosthenes
def SieveOfEratosthenes(upToMe):
	#Create a list of consecutive integers from two to n: (2, 3, 4, ..., n).
	primes = []
	
	for i in range(0, upToMe + 1):
		primes.append("O")
	
	primes[0] = "X"
	primes[1] = "X"

	#Initially, let p equal 2, the first prime number.
	p = 2
	
	#Repeat steps 3 and 4 until p is greater than n.
	while p <= upToMe:	
		#Starting from p, count up by p and cross out thus 
		#found numbers in the list (which will be 2p, 3p, 4p, etc.).
		i = 2
		
		while i * p <= upToMe:	
			primes[i * p] = "X"
			
			i += 1
		
		#Find the first number not yet crossed out after p; 
		#let p now equal this number (which is the next prime).
		i = p + 1
		while i <= upToMe and primes[i] == 'X':
			i += 1
		
		p = i
	
	#All the numbers in the list which are not crossed out are prime.
	i = 2
	justPrimes = []
	
	while i <= upToMe:
		if primes[i] == 'O':
			justPrimes.append(i)
		
		i += 1
	
	return justPrimes
