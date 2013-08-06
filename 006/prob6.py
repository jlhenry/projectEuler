#Project Euler Problem 6
#What is the difference between the sum of the squares and the square of the sums?

n = 100
sum_of_sqr = 0
sqr_of_sum = 0

#find the sum of squares up to n
for i in range(1, n + 1): sum_of_sqr += i**2

#find square of sum up to n
for i in range(1, n + 1): sqr_of_sum += i
sqr_of_sum **= 2

#display the difference
print sqr_of_sum - sum_of_sqr
