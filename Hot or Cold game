#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

/*Program is a "Hot or Cold" number guessing game.
Uses srand to pick a random number between 1 and 100.
The user keeps guessing until they find the number.
The program gives feedback based on how close the guess is:
- >20 away --> "Freezing" (with higher/lower hint)
- 11–20 away --> "Cold"
- 6–10 away --> "Warm"
- 2–3 away --> "Hot"
- exactly 1 away --> "Molten"
At the end, lets the user know how many attempts it took.*/

int main() {
    srand(time(NULL));                     // Seed the random number generator
    int secret = (rand() % 100) + 1;       // picks a random number between 1 and 100
    int attempts = 0;                      // keep track of how many guesses
    int guess;                             // store the user's guess

    printf("Please enter an integer: ");   // first prompt
    scanf("%d", &guess);                   // read the first guess
    attempts++;                            // count the first attempt

    //repeat until the guess matches the secret number
    while (guess != secret) {
        int diff = abs(secret - guess);     // how far the guess is from the secret

        //Gives hints depending on how far away the guess is
        if (diff > 20) {
            printf("Freezing! ");
            if (guess > secret) {
                printf("Go lower!\n");   // says higher or lower only at "Freezing" 
            } else {
                printf("Go higher!\n");
            }
        } else if (diff > 10) {
            printf("Cold!\n");
        } else if (diff > 5) {
            printf("Warm!\n");
        } else if (diff > 3) {
            printf("Hot!\n");
        } else if (diff == 1) {
            printf("Molten!\n");          // exactly 1 away
        } else {
            // case for 1<x<4
            printf("Hot!\n");
        }

        //Ask for another guess
        printf("Please enter an integer: ");
        scanf("%d", &guess);
        attempts++;         // count each new attempt
    }

    //Message when guessed correctly with correct number and attemps used
    printf("You guessed correctly in %d tries! The number was %d\n", attempts, secret);

    return 0;
}
