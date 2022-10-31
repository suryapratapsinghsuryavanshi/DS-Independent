# Python3 Program to find Newman–Shanks–Williams prime

# return nth Newman–Shanks–Williams prime
def nswp(n):
	
	# Base case
	if n == 0 or n == 1:
		return 1

	# Recursive step
	return 2 * nswp(n - 1) + nswp(n - 2)

# Driven Program
n = 3
print (nswp(n))


# This code is contributed by Shreyanshi Arun.
