// Here I am importing the standad input output file to allow the pregram have input and output.
#include <stdio.h>
// I am including the footnall header file
#include "football.h"

// Here I am defining my main function
int main() {
    // I am declaring an integer variable score.
    int score;

    // Here I am printing this line to let user know enter eithr 1 or 0 if they wanna stop the program. 
    printf("Enter 0 or 1 to STOP\n");
    // This while loop is to make sure our program doesn't stop until user wants to. 
    while (1) {
      // Here I am prompting the user to enter the score
      printf("Enter the NFL score: ");
      // I am storing the entered score to the score variable I created earlier.
      scanf("%d", &score);

      // If the entered score is less than or equal to 1,
      if (score <= 1)
        // We stop looping and stop the program.
        break;

      // Here we calculate the number of combinations and we pass in user_input value as the parameter.
      int count = count_combinations(score);
      
      // Here I am notifying the user that the number of different combinations and user input score.
      printf("\nThere are %d possible combinations of scoring plays if a team's score is %d:\n\n", count, score);
      
      // I call my predefined function to print all possible combinations in a well formatted way
      print_combinations(score);
      
      // Start a new line.
      printf("\n");
    }

    // Here I am ending my main function.
    return 0;
}
