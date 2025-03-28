// Here I am including std input output header file to be able to have input and output.
#include<stdio.h>

// Here I am including the temperature header file.
#include "temperature.h"

// This function will return a float and it takes in temperature with celsius as its unit.
float celsius_to_fahrenheit(float celsius){
  
  // Here I am converting the given celsius to farenheit by multiplying the celsius by (9.0 / 5.0) and adding 32.
  float farenheit = (9.0/5.0) * celsius + 32;
  
  // It returns the converted result(farenheit).
  return farenheit; 
}

// This function will return a float and it takes in temperature with fahrenheit as its unit.
float fahrenheit_to_celsius(float fahrenheit){
  
  // Here I am converting the given fahrenheit to celsius by subtracting 32 from fahrenheit and multiplying (5.0/9.0).
  float celsius = (5.0/9.0) * (fahrenheit - 32);

  // It returns the converted result(celsius).
  return celsius;
}

// This function will return a float and it takes in temperature with celsius as its unit.
float celsius_to_kelvin(float celsius){
  
  // Here I am converting the given celsius to kelvin by adding 273.15 to clesius.
  float kelvin = celsius + 273.15;
  
  // It returns the converted result(kelvin).
  return kelvin;
}

// This function will return a float and it takes in temperature with kelvin as its unit
float kelvin_to_celsius(float kelvin){
  
  // Here I am converting the given kelvin to celsius by subtracting 273.15 from kelvin.
  float celsius = kelvin - 273.15;
  
  // It returns the converted result(celsius).
  return celsius;
}


// This function is to categorize the given temperature into 5 different categories. It takes in celsius temperature as input.
void categorize_temperature(float celsius){
  
  // If the given temperature is less than 0 celsius,
  if (celsius < 0){
    
    // I print Freezing as the category.
    printf("Category: Freezing\n");

    // I print out an advisory to let the user be aware of the weather. 
    printf("Stay indoor and stay warm!\n");
  }

  // If the given temperature is greater than or euqal to 0 and less than 10 celsius,
  else if (celsius >= 0 && celsius < 10){

    // I print Cold as the category.
    printf("Category: Cold\n");

     // I print out an advisory to let the user be aware of the weather. 
    printf("Stay indoor if possible.\n");
  }

  // If the given temperature is greater than or euqal to 10 and less than 25 celsius,
  else if (celsius >= 10 && celsius < 25){

    // I print Comfortable as the category.
    printf("Category: Comfortable\n");

     // I print out an advisory to let the user be aware of the weather. 
    printf("Hey it is a perfect weather!\n");
  }

  // If the given temperature is greater than or euqal to 25 and less than 35 celsius,
  else if (celsius >= 25 && celsius < 35){

    // I print Hot as the category.
    printf("Category: Hot\n");

     // I print out an advisory to let the user be aware of the weather. 
    printf("It is kinda hot outside, remember to stay hydrated.");
  }

  // If the given temperature is greater than or euqal to 35,
  else if (celsius > 35){

    // I print Extreme as the category.
    printf("Category: Extreme Heat\n");

     // I print out an advisory to let the user be aware of the weather. 
    printf("Drink more water and avoid extreme outdoor activities!");
  }

  // This is to handle unexpected input.
  else{
    // Here I let user try again if the input is invalid.
    printf("Try again");
  }
}
