# Converter Utility

This C program provides a console-based utility for various conversions and calculations, including volume, time, temperature, mass, length conversions, basic arithmetic operations, and generating Fibonacci series. The program features a main menu for easy navigation.

## Features

1. **Conversions**:
   - Volume
   - Time
   - Temperature
   - Mass
   - Length

2. **Calculations**:
   - Basic arithmetic operations (addition, subtraction, multiplication, division)
   - Fibonacci series generation

## Functions

### Conversion Functions

- `void convertVolume(const char *fromUnit, const char *toUnit, double conversionFactor)`
- `void convertTime(const char *fromUnit, const char *toUnit, double conversionFactor)`
- `void convertTemp(const char *fromUnit, const char *toUnit, float (*conversionFunc)(float))`
- `void convertMass(const char *fromUnit, const char *toUnit, float conversionFactor)`
- `void convertLength(const char *fromUnit, const char *toUnit, float conversionFactor)`

### Menu Functions

- `int volumeMenu()`
- `int timeMenu()`
- `int tempMenu()`
- `int massMenu()`
- `int lengthMenu()`

### Utility Functions

- `void conversions()`: Displays the conversions menu.
- `void calc()`: Performs basic arithmetic operations.
- `void fib()`: Generates and prints Fibonacci series.
- `void menu()`: Displays the main menu and handles user input.

### Temperature Conversion Functions

- `float fahrenheitToCelsius(float temp)`
- `float celsiusToFahrenheit(float temp)`
- `float fahrenheitToKelvin(float temp)`
- `float kelvinToFahrenheit(float temp)`
- `float celsiusToKelvin(float temp)`
- `float kelvinToCelsius(float temp)`

## Usage

1. **Compile the program**:
   ```sh
   gcc -o converter converter.c
   ```

2. **Run the executable**:
   ```sh
   ./converter
   ```

3. **Navigate the menus**:
   - Choose from the main menu options for conversions, calculators, or Fibonacci series.
   - Follow the prompts to input values and receive converted results.

## Example

To convert temperatures:
1. Choose "Conversions" from the main menu.
2. Select "Temperature".
3. Pick a conversion type (e.g., Fahrenheit to Celsius).
4. Enter the temperature value when prompted.

## Error Handling

- Invalid menu choices prompt the user to try again.
- Division by zero in calculations is prevented and an error message is shown.

## Exit

- The user can exit the program from any menu by selecting the "Exit" option.

This program is intended for educational purposes and basic utility. Users can extend its functionality by adding more conversion types and mathematical operations as needed.

<a href="https://imgbb.com/"><img src="https://i.ibb.co/s25jwW1/332280928-982c089b-3c4b-42f0-91fb-6fe629c7ab98.png" alt="332280928-982c089b-3c4b-42f0-91fb-6fe629c7ab98" border="0"></a>
<a href="https://imgbb.com/"><img src="https://i.ibb.co/6skNJQv/332280893-fea9f560-5f1a-4d53-9fc9-befc0f75605e.png" alt="332280893-fea9f560-5f1a-4d53-9fc9-befc0f75605e" border="0"></a>
