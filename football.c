// Here we are including the library that allows us to have input and output
#include<stdio.h>
// Here we are including the header file we defined earlier.
#include "football.h"

// Here we are defining our cout_combination function that takes in a parameter score.
int count_combinations(int score) {
    // Here I am declaring the different types of ways a team can score in a game
    int TD_2pt, TD_1pt, TD, FG, safety;
    // This is reponsible for keeping track of valid combinations.
    int count = 0;

    // Try all possible number of Touchdown + 2 point conversions from 0 up to (score / 8) -> max num of 8's
    for (TD_2pt = 0; TD_2pt * 8 <= score; TD_2pt++) {
        // For each 8-point touchdown, try all possible number of 7-point touchdowns
        for (TD_1pt = 0; TD_1pt * 7 + TD_2pt * 8 <= score; TD_1pt++) {
            // For each combination for 8 and 7-point touchdowns, try 6-point touchdowns
            for (TD = 0; TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; TD++) {
                // Try to add field goals and add it as long as it is less than the score given by the user.
                for (FG = 0; FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; FG++) {
                    // Try to add safeies and add it as long as it doesn't exceed the given score by the user.
                    for (safety = 0; safety * 2 + FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; safety++) {
                        // Here we calcualte the total score of current combination we've computed
                        int total = safety * 2 + FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8;
                        // If the total we have is quivalent as the given score
                        if (total == score) {
                            // We increment the count number by 1. 
                            count++;
                        }
                    }
                }
            }
        }
    }
    // We return the final number of combinations.
    return count;
}

// This function does pretty much the same thing as previous function, but it prints the combinations out instead.
void print_combinations(int score) {
    // Here I am declaring the different types of ways a team can score in a game
    int TD_2pt, TD_1pt, TD, FG, safety;

    // Try all possible number of Touchdown + 2 point conversions from 0 up to (score / 8) -> max num of 8's
    for (TD_2pt = 0; TD_2pt * 8 <= score; TD_2pt++) {
        // For each 8-point touchdown, try all possible number of 7-point touchdowns
        for (TD_1pt = 0; TD_1pt * 7 + TD_2pt * 8 <= score; TD_1pt++) {
            // For each combination for 8 and 7-point touchdowns, try 6-point touchdowns
            for (TD = 0; TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; TD++) {
                // Try to add field goals and add it as long as it is less than the score given by the user.
                for (FG = 0; FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; FG++) {
                    // Try to add safeies and add it as long as it doesn't exceed the given score by the user.
                    for (safety = 0; safety * 2 + FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8 <= score; safety++) {
                        // Here we calculate the total score of the current combination 
                        int total = safety * 2 + FG * 3 + TD * 6 + TD_1pt * 7 + TD_2pt * 8;
                        // If the total score of the current combination is equivalent as the given score,
                        if (total == score) {
                            // We print the combination in a well formatted way.
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",TD_2pt, TD_1pt, TD, FG, safety);
                        }
                    }
                }
            }
        }
    }
}
