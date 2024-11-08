#include <stdio.h>

// Function prototypes
void convertVolume(const char *fromUnit, const char *toUnit,
                   double conversionFactor);
int volumeMenu();

void convertTime(const char *fromUnit, const char *toUnit,
                 double conversionFactor);
int timeMenu();

void convertTemp(const char *fromUnit, const char *toUnit,
                 float (*conversionFunc)(float));
int tempMenu();

void convertMass(const char *fromUnit, const char *toUnit,
                 float conversionFactor);
int massMenu();

void convertLength(const char *fromUnit, const char *toUnit,
                   float conversionFactor);
int lengthMenu();

void conversions();
void calc();
void menu();

//---------------------------------------------------------------------------------

// Function to convert time
void convertVolume(const char *fromUnit, const char *toUnit,
                   double conversionFactor) {
  float input;
  printf("\nEnter the volume in %s: ", fromUnit);
  scanf("%f", &input);
  printf("\nThe volume in %s is: %f %s\n\n", toUnit, input * conversionFactor,
         toUnit);
  volumeMenu();
}

int volumeMenu() {
  printf("\n1.  Mm^3 -> Ml    2.  Ml -> Mm^3\n"
         " 3. Mm^3 -> L    4. L -> Mm^3\n"
         " 5. Cm^3 -> L    6. L -> Cm^3\n"
         " 7. Tsp -> Tbsp  8. Tbsp -> Tsp\n"
         " 9. Tsp -> Cup  10. Cup -> Tsp\n"
         "11. Tbsp -> Cup 12. Cup -> Tbsp\n"
         "13. Tbsp -> Pt  14. Pt -> Tbsp\n"
         "15. Cup -> Pt   16. Pt -> Cup\n"
         "17. Cup -> Qt   18. Qt -> Cup\n"
         "19. Cup -> Gal  20. Gal -> Cup\n"
         "21. Pt -> Qt    22. Qt -> Pt\n"
         "23. Pt -> Gal   24. Gal -> Pt\n"
         "25. Qt -> Gal   26. Gal -> Qt\n"

         "\n    Hint: 1Cm^3 = 1Ml\n"
         "27. Back         28. Exit\n"
         "Enter your choice: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    convertVolume("Cubic ilimeters", "Millileters", 0.001);
    volumeMenu();
    break;

  case 2:
    convertVolume("Miliiters", "Cubic Milimeters", 1000);
    volumeMenu();
    break;

  case 3:
    convertVolume("Cubic Milimeters", "Liters", 0.000001);
    volumeMenu();
    break;

  case 4:
    convertVolume("Liters", "Cubic Milimeters", 1000000);
    volumeMenu();
    break;

  case 5:
    convertVolume("Cubic Centimeters", "Liters", 0.001);
    volumeMenu();
    break;

  case 6:
    convertVolume("Liters", "Cubic Centimeters", 1000);
    volumeMenu();
    break;

  case 7: 
    convertVolume("Teaspoons", "Tablespoons", 0.333333);
    volumeMenu();
    break;

  case 8:
    convertVolume("Tablespoons", "Teaspoons", 3);
    volumeMenu();
    break;

  case 9:
    convertVolume("Teaspoons", "Cups", 0.0208333);
    volumeMenu();
    break;

  case 10:
    convertVolume("Cups", "Teaspoons", 48);
    volumeMenu();
    break;

  case 11:
    convertVolume("Tablespoons", "Cups", 0.0625);
    volumeMenu(); 
    break;

  case 12:
    convertVolume("Cups", "Tablespoons", 16);
    volumeMenu();
    break;

  case 13:
    convertVolume("Tablespoons", "Pints", 0.03125);
    volumeMenu();
    break;

  case 14:
    convertVolume("Pints", "Tablespoons", 32);
    volumeMenu();
    break;

  case 15:
    convertVolume("Cups", "Pints", 0.5);
    volumeMenu();
    break;

  case 16:
    convertVolume("Pints", "Cups", 2);
    volumeMenu();
    break;

  case 17:
    convertVolume("Cups", "Quarts", 0.25);
    volumeMenu();
    break;

  case 18:
    convertVolume("Quarts", "Cups", 4);
    volumeMenu();
    break;

  case 19:
    convertVolume("Cups", "Gallons", 0.0625);
    volumeMenu();
    break;

  case 20:
    convertVolume("Gallons", "Cups", 16);
    volumeMenu();
    break;
  
  case 21:
    convertVolume("Pints", "Quarts", 0.5);
    volumeMenu();
    break;

  case 22:
    convertVolume("Quarts", "Pints", 2);
    volumeMenu();
    break;

  case 23:
    convertVolume("Pints", "Gallons", 0.125);
    volumeMenu();
    break;

  case 24:
    convertVolume("Gallons", "Pints",   8);
    volumeMenu();
    break;

  case 25:
    convertVolume("Quarts", "Gallons", 0.25);
    volumeMenu();
    break;

  case 26:
    convertVolume("Gallons", "Quarts", 4);
    volumeMenu();
    break;

  case 27:
    conversions();
    break;
  case 28:
    return 1;
  default:
    printf("Invalid choice, please try again.\n");
    break;
  }
  return 0;
}

//---------------------------------------------------------------------------------

void convertTime(const char *fromUnit, const char *toUnit,
                 double conversionFactor) {
  float input;
  printf("\nEnter the time in %s: ", fromUnit);
  scanf("%f", &input);
  printf("\nThe time in %s is: %f %s\n\n", toUnit, input * conversionFactor,
         toUnit);
  timeMenu();
}

int timeMenu() {
  printf("\n1.  Sec -> Min   2.  Min -> Sec\n"
         "3.  Sec -> Hr    4.  Hr -> Sec\n"
         "5.  Sec -> Day   6.  Day -> Sec\n"
         "7.  Min -> Hr    8.  Hr -> Min\n"
         "9.  Min -> Day   10. Day -> Min\n"
         "11. Hr -> Day    12. Day -> Hr\n"
         "13. Back         14. Exit\n"
         "Enter your choice: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    convertTime("Seconds", "Minutes", 0.0167);
    timeMenu();
    break;
  case 2:
    convertTime("Minutes", "Seconds", 60);
    timeMenu();
    break;
  case 3:
    convertTime("Seconds", "Hours", 0.000277778);
    timeMenu();
    break;
  case 4:
    convertTime("Hours", "Seconds", 3600);
    timeMenu();
    break;
  case 5:
    convertTime("Seconds", "Days", 0.0000115741);
    timeMenu();
    break;
  case 6:
    convertTime("Days", "Seconds", 86400);
    timeMenu();
    break;
  case 7:
    convertTime("Minutes", "Hours", 0.0166667);
    timeMenu();
    break;
  case 8:
    convertTime("Hours", "Minutes", 60);
    timeMenu();
    break;
  case 9:
    convertTime("Minutes", "Days", 0.000694444);
    timeMenu();
    break;
  case 10:
    convertTime("Days", "Minutes", 1440);
    timeMenu();
    break;
  case 11:
    convertTime("Hours", "Days", 0.0416667);
    timeMenu();
    break;
  case 12:
    convertTime("Days", "Hours", 24);
    timeMenu();
    break;
  case 13:
    conversions();
    break;
  case 14:
    return 1;
  default:
    printf("Invalid choice, please try again.\n");
    break;
  }
  return 0;
}

//---------------------------------------------------------------------------------

// Temperature conversion functions
float fahrenheitToCelsius(float temp) { return (temp - 32) / 1.8; }

float celsiusToFahrenheit(float temp) { return (temp * 1.8) + 32; }

float fahrenheitToKelvin(float temp) { return (temp - 32) / 1.8 + 273.15; }

float kelvinToFahrenheit(float temp) { return (temp - 273.15) * 1.8 + 32; }

float celsiusToKelvin(float temp) { return temp + 273.15; }

float kelvinToCelsius(float temp) { return temp - 273.15; }

// Function to handle temperature conversions
void convertTemp(const char *fromUnit, const char *toUnit,
                 float (*conversionFunc)(float)) {
  float input;
  printf("\nEnter the temperature in %s: ", fromUnit);
  scanf("%f", &input);
  printf("\nThe temperature in %s is: %f %s\n\n", toUnit, conversionFunc(input),
         toUnit);
  tempMenu();
}

int tempMenu() {
  printf("\n1.  F -> C   2.  C -> F\n"
         "3.  F -> K   4.  K -> F\n"
         "5.  C -> K   6.  K -> C\n"
         "7. Back      8. Exit\n"
         "Enter your choice: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    convertTemp("Fahrenheit", "Celsius", fahrenheitToCelsius);
    break;
  case 2:
    convertTemp("Celsius", "Fahrenheit", celsiusToFahrenheit);
    break;
  case 3:
    convertTemp("Fahrenheit", "Kelvin", fahrenheitToKelvin);
    break;
  case 4:
    convertTemp("Kelvin", "Fahrenheit", kelvinToFahrenheit);
    break;
  case 5:
    convertTemp("Celsius", "Kelvin", celsiusToKelvin);
    break;
  case 6:
    convertTemp("Kelvin", "Celsius", kelvinToCelsius);
    break;
  case 7:
    conversions();
    break;
  case 8:
    return 1;
  default:
    printf("Invalid choice, please try again.\n");
    tempMenu();
    break;
  }
  return 0;
}

//---------------------------------------------------------------------------------

// Function to handle mass conversions
void convertMass(const char *fromUnit, const char *toUnit,
                 float conversionFactor) {
  float input;
  printf("\nEnter the mass in %s: ", fromUnit);
  scanf("%f", &input);
  printf("\nThe mass in %s is: %f %s\n\n", toUnit, input * conversionFactor,
         toUnit);
  massMenu();
}

int massMenu() {
  printf("\n1.  G -> Oz     2.  Oz -> G\n"
         "3.  G -> Lbs    4.  Lbs -> G\n"
         "5.  Oz -> Lbs   6.  Lbs -> Oz\n"
         "7.  G -> Kg     8.  Kg -> G\n"
         "9.  Oz -> Kg   10. Kg -> Oz\n"
         "11. Back       12. Exit\n"
         "Enter your choice: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    convertMass("Grams", "Ounces", 0.035274);
    break;
  case 2:
    convertMass("Ounces", "Grams", 28.3495);
    break;
  case 3:
    convertMass("Grams", "Pounds", 0.00220462);
    break;
  case 4:
    convertMass("Pounds", "Grams", 453.592);
    break;
  case 5:
    convertMass("ounces", "pounds", 0.0625);
    break;
  case 6:
    convertMass("pounds", "ounces", 16);
    break;
  case 7:
    convertMass("grams", "kilograms", 0.001);
    break;
  case 8:
    convertMass("kilograms", "grams", 1000);
    break;
  case 9:
    convertMass("ounces", "kilograms", 0.0283495);
    break;
  case 10:
    convertMass("kilograms", "ounces", 35.274);
    break;
  case 11:
    conversions();
    break;
  case 12:
    return 1;
  default:
    printf("Invalid choice, please try again.\n");
    break;
  }
  return 0;
}

//---------------------------------------------------------------------------------

// Function to handle length conversions
void convertLength(const char *fromUnit, const char *toUnit, float conversionFactor) 
{
  float input;
  printf("\nEnter the length in %s: ", fromUnit);
  scanf("%f", &input);
  printf("\nThe length in %s is: %f %s\n\n", toUnit, input * conversionFactor, toUnit);
  lengthMenu();
}

int lengthMenu() {
  printf("\n1.  In -> Cm    2.  Cm -> In\n"
         "3.  In -> Ft    4.  Ft -> In\n"
         "5.  Cm -> Ft    6.  Ft -> Cm\n"
         "7.  Cm -> M     8.  M  -> Cm\n"
         "9.  In -> M    10.  M  -> In\n"
         "11. Ft -> M    12.  M  -> Ft\n"
         "13. Yrd -> M   14.  M  -> Yrd\n"
         "15. Yrd -> Ft  16.  Ft -> Yrd\n"
         "17. M -> Km    18.  Km -> M\n"
         "19. Ft -> Km   20.  Km -> Ft\n"
         "21. M -> Mi    22.  Mi -> M\n"
         "23. Km -> Mi   24.  Mi -> Km\n"
         "25. Ft -> Mi   26.  Mi -> Ft\n"
         "27. Back       28. Exit\n"
         "Enter your choice: ");

  int choice;
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    convertLength("inches", "centimeters", 2.54);
    break;
  case 2:
    convertLength("centimeters", "inches", 1 / 2.54);
    break;
  case 3:
    convertLength("inches", "feet", 1 / 12.0);
    break;
  case 4:
    convertLength("feet", "inches", 12.0);
    break;
  case 5:
    convertLength("centimeters", "feet", 1 / 30.48);
    break;
  case 6:
    convertLength("feet", "centimeters", 30.48);
    break;
  case 7:
    convertLength("centimeters", "meters", 1 / 100.0);
    break;
  case 8:
    convertLength("meters", "centimeters", 100.0);
    break;
  case 9:
    convertLength("inches", "meters", 1 / 39.37);
    break;
  case 10:
    convertLength("meters", "inches", 39.37);
    break;
  case 11:
    convertLength("feet", "meters", 1 / 3.281);
    break;
  case 12:
    convertLength("meters", "feet", 3.281);
    break;
  case 13:
    convertLength("yards", "meters", 1 / 1.094);
    break;
  case 14:
    convertLength("meters", "yards", 1.094);
    break;
  case 15:
    convertLength("yards", "feet", 3.0);
    break;
  case 16:
    convertLength("feet", "yards", 1 / 3.0);
    break;
  case 17:
    convertLength("meters", "kilometers", 1 / 1000.0);
    break;
  case 18:
    convertLength("kilometers", "meters", 1000.0);
    break;
  case 19:
    convertLength("feet", "kilometers", 1 / 3280.84);
    break;
  case 20:
    convertLength("kilometers", "feet", 3280.84);
    break;
  case 21:
    convertLength("meters", "miles", 1 / 1609.34);
    break;
  case 22:
    convertLength("miles", "meters", 1609.34);
    break;
  case 23:
    convertLength("kilometers", "miles", 1 / 1.609);
    break;
  case 24:
    convertLength("miles", "kilometers", 1.609);
    break;
  case 25:
    convertLength("feet", "miles", 1 / 5280.0);
    break;
  case 26:
    convertLength("miles", "feet", 5280.0);
    break;
  case 27:
    conversions();
    break; // Back to menu
  case 28:
    return 1; // Exit
  default:
    printf("Invalid choice, please try again.\n");
    lengthMenu();
    break;
  }
  return 0;
}

//---------------------------------------------------------------------------------

// Conversions Menu
void conversions(void) {
  int choice;
  printf("\n1. Length\n");
  printf("2. Mass\n");
  printf("3. Temperature\n");
  printf("4. Time\n");
  printf("5. Volume\n");
  /*printf("6. Area\n");
  printf("7. Speed\n");
  printf("8. Pressure\n");
  printf("9. Electric Current\n");
  printf("10. Energy\n");
  printf("11. Forces\n");
  printf("12. Power\n");
  printf("13. Back\n");
  printf("14. Exit\n");*/
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    lengthMenu();
    break;
  case 2:
    massMenu();
    break;
  case 3:
    tempMenu();
    break;
  case 4:
    timeMenu();
    break;
  case 5:
    volumeMenu();
    break;
  case 13:
    menu();
    break;
  case 14:
    return; // Exit
  default:
    printf("Invalid choice, please try again.\n");
    conversions();
    break;
  }
}

//---------------------------------------------------------------------------------

void bcalc() {
  float x = 0;
  float y = 0;
  float result;
  char op;

  printf("\nEnter your operator (+, -, *, /): ");
  scanf(" %c", &op); // Note the space before %c to consume any leftover newline

  printf("\nEnter both numbers separated by a space: ");
  scanf("%f %f", &x, &y);

  switch (op) {
  case '+':
    result = x + y;
    printf("\n%f + %f = %f\n", x, y, result);
    break;
    menu();
  case '-':
    result = x - y;
    printf("\n%f - %f = %f\n", x, y, result);
    menu();
    break;
  case '*':
    result = x * y;
    printf("\n%f * %f = %f\n", x, y, result);
    menu();
    break;
  case '/':
    if (y == 0 || x == 0) {
      printf("Error: Cannot divide by 0\n");
      calc();
    } else {
      result = x / y;
      printf("\n%f / %f = %f\n", x, y, result);
      menu();
    }
    break;
  default:
    printf("Invalid operator\n");
    calc();
    break;
    menu();
  }
}

void fib() {
  double i, n;

  // initialize first and second terms
  double t1 = 1, t2 = 1;

  // initialize the next term (3rd term)
  double nextTerm = t1 + t2;

  // get no. of terms from user
  printf("Enter the number of terms: ");
  scanf("%lf", &n);

  // print the first two terms t1 and t2
  printf("Fibonacci Series: %.0lf, %.0lf, ", t1, t2);

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    printf("%.0lf, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }
  menu();
}

//This is the G.A.C a grade average calculator
void grade(int assignments) 
{   
  int grades[assignments];
  int sum = 0;

  for(int i = 0; i < assignments; i++)    
    {
      printf("\nEnter your grade for assignment #%d: ", i + 1);
      scanf("%d", &grades[i]);
      sum += grades[i];   
    }  
  float average = (float)sum / assignments;
  printf("\nAverage grade = %d / %d \n", sum, assignments);
  printf("Average grade: %.2f\n", average);

}

void gac() 
{
    int hma;
    printf("\nHow many assignments do you have: ");
    scanf("%d", &hma);
    grade(hma);
}



// Calculator Menu Function
void calc(void) {
  int choice;
  printf("\n1. Basic Calculator\n");
  printf("2. Grade Average Calculator\n");
  printf("3. Fib Sequence\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    bcalc();
    break;
  case 2:
    gac();
    break;
  case 3:
    fib();
    break;
  case 9:
    menu();
    break;
  case 10:
    return; // Exit
  default:
    printf("Invalid choice, please try again.\n");
    conversions();
    break;
  }
}
//---------------------------------------------------------------------------------

// Main Menu
void menu() {
  int choice;
  printf("\n\n1. Conversions\n");
  printf("2. Calculators\n");
  printf("3. Exit\n");
  printf("Enter your choice: ");
  scanf("%d", &choice);
  switch (choice) {
  case 1:
    conversions();
    break;

  case 2:
    calc();
    break;

  case 3:
    return; // Exit

  default:
    printf("Invalid choice, please try again.\n");
    menu();
    break;
  }
}

int main(void) {
  menu();
  return 0;
}
