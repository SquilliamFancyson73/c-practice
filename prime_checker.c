#include <stdio.h>

/*Prime Checker (trial division with sqrt optimization)

1)Prompts the user for a whole number n.
2)If n <= 1, immediately reports "not prime" (by definition, primes are >= 2).
3)Otherwise, checks if any integer divisor d in [2, floor(sqrt(n))] divides n.
    -Uses the condition d * d <= n instead of calling sqrt(), avoiding the use of math.h
    and stops as soon as d exceeds sqrt(n).
4)Prints if n is prime or not.

Notes:
- The flag 'isPrime' starts as 1 (true) and flips to 0 (false) upon finding a divisor.
- If a divisor is found, we 'break' early to avoid more unnecessary checks.
*/

int main() {
    int n;                                   // number to test for primality
    printf("Please enter a whole number: "); // Prompts user for input
    scanf("%d", &n);                         // Read integer input into n

    if (n <=1 ) //Handles trivial non-prime cases (n <= 1)
    {
        printf("%d is not prime. \n", n);    
        return 0;                           // Exit early since no further checks are needed
    }
    
    int isPrime = 1;                         // Assume prime until we find a counterexample
    for (int d = 2; d * d <= n; d++)         //test potential divisors from 2 up to sqrt(n)
    {
        if (n % d == 0)                      // if d divides n evenly, n is not prime
        {
            isPrime = 0;                     //mark as not prime
            break;                           //early exit as no need to test larger divisors
        }
        
    }
    if (isPrime) {  // After the loop, lets user know if their number is prime or not
        printf("%d is prime.\n", n);
    } else {
        printf("%d is not prime.\n", n);
    }

    return 0;   //end of program
}
