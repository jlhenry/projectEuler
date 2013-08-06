#Project Euler Problem 8
#
#Find the greatest product of five consecutive digits in the 1000-digit number.

#opern the file and read in the number to traverse as a string
largeNumberFile = open("number.txt","r")
largeNumberString = largeNumberFile.read().replace('\n','')
greatestProduct = 0
i = 0
productCount = 0
productarray = []

while i + 4 < len(largeNumberString):
	product = 1
	
	for j in range(0, 4):
		product *= int(largeNumberString[i + j])
		productCount += 1
	
	if product > greatestProduct: greatestProduct = product
	productarray.append(product)
	i += 1

print productarray
print greatestProduct
print productCount
print i
