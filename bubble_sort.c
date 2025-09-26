#include <stdio.h>

// This program asks the user to enter some integers,
// sorts them in ascending order using bubble sort,
// and then prints the sorted list with commas.

int main() {

    int n;
    // Ask the user how many numbers to sort
    printf("How many numbers do you want to sort? ");
    scanf("%d", &n);

    // Create an array of size n
    int numbers[n];
    // Read n integers from the user
    for (int i = 0; i < n; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &numbers[i]);
    }
    
    // Bubble sort algorithm
    for (int pass = 0; pass < n - 1; pass++)
    {
        for (int i = 0; i < n - 1 - pass; i++)
    {
        // Swap if current element is bigger than the next one
        if (numbers[i] > numbers[i + 1])
        {
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;
        }
    }
    }
    // Print sorted numbers separated by commas
    printf("These are your numbers sorted from smallest to largest: ");
for (int j = 0; j < n; j++) {
    if (j == n - 1) {
        // Print last number without comma
        printf("%d", numbers[j]);
    } else {
        // Print number with comma and space
        printf("%d, ", numbers[j]);
    }
}
printf("\n");

    return 0;

}
