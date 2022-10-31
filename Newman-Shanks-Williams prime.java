
In mathematics, a Newman–Shanks–Williams prime (NSW prime) is a prime number p which can be written in the form: 

{\huge S_{2m+1} = \frac{ {(1+\sqrt{2})^{2m+1} + (1-\sqrt{2})^{2m+1} } }{2} }      

Recurrence relation for Newman–Shanks–Williams prime is:
S_0 = 1      
S_1 = 1      
S_n = 2*S_{n-1} + S{n-2}      
The first few terms of the sequence are 1, 1, 3, 7, 17, 41, 99,…//
  
  
// Java Program to find
// Newman-Shanks-Williams prime
class GFG
{
// return nth Newman-Shanks-Williams
// prime
static int nswp(int n)
{
	// Base case
	if (n == 0 || n == 1)
		return 1;

	// Recursive step
	return 2 * nswp(n - 1) + nswp(n - 2);
}

// Driver code
public static void main (String[] args)
{
	int n = 3;
	System.out.println(nswp(n));
}
}

// This code is contributed by Anant Agarwal.
