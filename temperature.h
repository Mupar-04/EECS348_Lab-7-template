// Here we are checking if there is any other same methods were defined
#ifndef __REPORT_H__
#define __REPORT_H__

/* Add any function signatures you need here but do not modify the existing ones */

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * 
 * @param celsius
 * @return float
 */

// This is a function declaration and this function is responsible for converting from celsius to fahrenheit. It takes in celsius as parameter
float celsius_to_fahrenheit(float celsius);

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit
 * @return float
 */

// This is a function declaration and this function is responsible for converting from fahrenheit to celsius. It takes in fahrenheit as parameter
float fahrenheit_to_celsius(float fahrenheit);

/**
 * @brief Convert temperature in Celsius to Kelvin
 * 
 * @param celsius
 * @return float
 */

// This is a function declaration and this function is responsible for converting from celsius to kelvin. It takes in celsius as parameter
float celsius_to_kelvin(float celsius);

/**
 * @brief Convert temperature in Kelvin to Celsius
 * 
 * @param celsius
 * @return float
 */

// This is a function declaration and this function is responsible for converting from kelvin to celsius. It takes in kelvin as parameter
float kelvin_to_celsius(float kelvin);

// This is a function declaration and this function is responsible for categorizing the given temperature by the user. It takes in celsius as parameter
void categorize_temperature(float celsius);

//End of the include guard
#endif /* __REPORT_H__ */
