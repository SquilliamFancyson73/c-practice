# c-practice

This repository contains small C programs I wrote while learning.

## Programs

### Bubble Sort  
Asks the user for numbers and sorts them in ascending order using bubble sort.  


### Hot or Cold Game  
A number guessing game:  
- The computer picks a random number between 1 and 100.  
- The user keeps guessing until correct.  
- The program gives feedback:  
  - `Freezing` (>20 away, with higher/lower hint)  
  - `Cold` (11–20 away)  
  - `Warm` (6–10 away)  
  - `Hot` (2–3 away)  
  - `Molten` (exactly 1 away)  
- Reports how many attempts it took.

### Prime Checker  
A program that checks if a number is prime.  
- Rejects numbers ≤ 1 as not prime.  
- Uses trial division up to sqrt(n) to test divisibility efficiently.  
- Prints if the number is prime or not.  
