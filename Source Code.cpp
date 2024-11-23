#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to display the choices
void displayChoice(int choice) {
    if (choice == 1) {
        printf("Rock");
    } else if (choice == 2) {
        printf("Paper");
    } else if (choice == 3) {
        printf("Scissors");
    }
}

// Function to determine the winner
void determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((playerChoice == 1 && computerChoice == 3) || 
               (playerChoice == 2 && computerChoice == 1) || 
               (playerChoice == 3 && computerChoice == 2)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int playerChoice, computerChoice;

    // Seed the random number generator
    srand(time(0));

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Choose:\n1. Rock\n2. Paper\n3. Scissors\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &playerChoice);

    // Ensure valid input
    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice! Please run the program again.\n");
        return 1;
    }

    // Generate random choice for computer (1 = Rock, 2 = Paper, 3 = Scissors)
    computerChoice = (rand() % 3) + 1;

    // Display choices
    printf("You chose: ");
    displayChoice(playerChoice);
    printf("\nComputer chose: ");
    displayChoice(computerChoice);
    printf("\n");

    // Determine and display the winner
    determineWinner(playerChoice, computerChoice);

    return 0;
}

