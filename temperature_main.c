// Here I am including std input output header file to be able to have input and output.
#include<stdio.h>

// Here I am including the temperature header file.
#include "temperature.h"

// This is my main function
int main() {
  // I am declating the float variable to store user input
  float input_temp;
  
  // This char type variable is to store the user input's unit
  char input_scale;
  
  // This is to store final target's unit
  char target_scale;
  
  // Here I am prompting the user to enter their temperature
  printf("Enter the temperature: ");
  
  // I store the user input temperature in input_temp variable. 
  scanf("%f" , &input_temp);


  // I prompt the user to enter the unit of temperature they put in
  printf("Enter the input scale([C]Celsius [F]Farenheit [K]Kelvin): ");
  
  // I store the user input unit into input_scale variable. 
  scanf(" %c" , &input_scale);

  // Now I ask for what is their target unit
  printf("Enter the target scale([C]Celsius [F]Farenheit [K]Kelvin): ");
  
  // I store their target unit into the target_scale variable. 
  scanf(" %c" , &target_scale);



  // Prevent invalid conversion (same scale)
    if (input_scale == target_scale) {
      // I let the user know their target unit cannot be the same as their input unit. 
      printf("Error: Source and target scales cannot be the same.\n");
      
      // I end the program.
      return 1;
    }

    // Convert input to Celsius
    float celsius;
    
    // If the input is already celsius
    if (input_scale == 'C') {
      // No conversion is needed.
      celsius = input_temp;
    } 

    // If user input is in fahrenheit
    else if (input_scale == 'F') {
      // I convert fahrenheit to celsius
      celsius = fahrenheit_to_celsius(input_temp);
    } 
    
    // If the user input is in kelvin,
    else if (input_scale == 'K') {
        // Check if the user input is valid,
        if (input_temp < 0) {
          // Let user know they entered invlid temperature
          printf("Error: Kelvin temperature cannot be negative.\n");
          
          // I end the program
          return 1;
        }

        // If valid, I convert kelvin to celsius.
        celsius = kelvin_to_celsius(input_temp);
    } 
    
    // If they type anything besides C,F or K,
    else {
        // I let the user know they've entered an invalid unit
        printf("Invalid input scale. Use C, F, or K.\n");
        // I end the program. 
        return 1;
    }

  // Convert Celsius to target scale
    float result_temp;
    
    // If target is celsius
    if (target_scale == 'C') {
        // No need to change anything
        result_temp = celsius;
    } 
    
    // If target is fahrenheit,
    else if (target_scale == 'F') {

        // Set the value of resulting temperature to fahrenheit
        result_temp = celsius_to_fahrenheit(celsius);
    } 
    
    // If target is kelvin,
    else if (target_scale == 'K') {

        // Set the value of resulting temperature to kelvin
        result_temp = celsius_to_kelvin(celsius);
    } 
    
    // If the input is none of the above, 
    else {

        // I tell the user they've entered an invalid input
        printf("Invalid target scale. Use C, F, or K.\n");
        // I end the program
        return 1;
    }

    // Output results
    printf("Converted temperature: %.2f %c\n", result_temp, target_scale);
    
    // Print out the temperature category
    categorize_temperature(celsius);

  // End the program.
  return 0;
}
