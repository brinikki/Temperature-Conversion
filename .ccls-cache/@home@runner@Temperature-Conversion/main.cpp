

#include <iostream>
using namespace std;

int main()
{

  double f;
  double c;
  double r;
  double k;

  char ans;
  int f_to_temp_choice;
  int c_to_temp_choice;
  int k_to_temp_choice;
  int r_to_temp_choice;
 
  // Fahrenheit
  double f_to_c;
  double f_to_k;
  double f_to_r;

 
  // Celsius
  double c_to_f;
  double c_to_k;
  double c_to_r;

 
  // Kelvin
  double k_to_r;
  double k_to_f;
  double k_to_c;

 
  // Rankine
  double r_to_k;
  double r_to_c;
  double r_to_f;


  // Please note, some of the temperatures in these conversions are not entirely accurate.
 

  cout << endl;
  cout << "What initial temperature do you want to convert?" << endl;
  cout << endl;
  cout << "a. Fahrenheit" << endl;
  cout << "b. Celsius" << endl;
  cout << "c. Kelvin" << endl;
  cout << "d. Rankine" << endl;
  cout << endl;
  cout << "Type the letter and Enter of your choice: " << endl;
  cin >> ans;
  cout << endl;

  // Fahrenheit
  if (ans == 'a' || ans == 'A')
  {
    cout << "From Fahrenheit, what would you like to convert the temperature to? " << endl;
    cout << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Kelvin" << endl;
    cout << "3. Rankine" << endl;
    cout << endl;
    cout << "Type the number and Enter of your choice." << endl;
    cin >> f_to_temp_choice;
    cout << endl;

    // Fahrenheit to Celsius
    if (f_to_temp_choice == 1)
    {
      cout << "What is the temperature in degrees Fahrenheit? ";
      cin >> f;

      cout << endl;
   
      f_to_c = (f - 32) / 1.8;
     
      cout << "Fahrenheit to Celsius = " << f_to_c << " degrees" << endl;
    }

    // Fahrenheit to Kelvin
    if (f_to_temp_choice == 2)
    {
      cout << "What is the temperature in Fahrenheit? ";
      cin >> f;
     
      f_to_c = (f - 32) / 1.8;
      f_to_k = f_to_c + 273.2;

      cout << "Fahrenheit to Kelvin = " << f_to_k << " degrees" << endl;
    }

    // Fahrenheit to Rankine
    if (f_to_temp_choice == 3)
    {
      cout << "What is the temperature in Fahrenheit? ";
      cin >> f;

      cout << endl;
   
      f_to_r = f + 459.7;

      cout << "Fahrenheit to Rankine = " << f_to_r << " degrees" << endl;
    }

    cout << endl;
  }



 
  // Celsius
  if (ans == 'b' || ans == 'B')
  {
    cout << "From Celsius, what would you like to convert the temperature to? " << endl;
    cout << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Kelvin" << endl;
    cout << "3. Rankine" << endl;
    cout << endl;
    cout << "Type the number and Enter of your choice." << endl;
    cin >> c_to_temp_choice;
    cout << endl;

    // Celsius to Fahrenheit
    if (c_to_temp_choice == 1)
    {
      cout << "What is the temperature in Celsius? ";
      cin >> c;

      cout << endl;

      c_to_f = 1.8 * c + 32;

      cout << "Celsius to Fahrenheit = " << c_to_f << " degrees" << endl;
    }

    // Celsius to Kelvin
    if (c_to_temp_choice == 2)
    {
      cout << "What is the temperature in Celsius? ";
      cin >> c;
     
      cout << endl;

      c_to_k = c + 273.2;
     
      cout << "Celsius to Kelvin = " << c_to_k << " degrees" << endl;
    }

    // Celsius to Rankine
    if (c_to_temp_choice == 3)
    {
      cout << "What is the temperature in Celsius? ";
      cin >> c;

      cout << endl;

      c_to_f = 1.8 * c + 32;
      c_to_r = c_to_f + 459.7;

      cout << "Celsius to Rankine = " << c_to_r << " degrees" << endl;
    }

    cout << endl;
  }



 
  // Kelvin
  if (ans == 'c' || ans == 'C')
  {
    cout << "From Kelvin, what would you like to convert the temperature to? " << endl;
    cout << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Celsius" << endl;
    cout << "3. Rankine" << endl;
    cout << endl;
    cout << "Type the number and Enter of your choice." << endl;
    cin >> k_to_temp_choice;
    cout << endl;

    // Kelvin to Fahrenheit
    if (k_to_temp_choice == 1)
    {
      cout << "What is the temperature in Kelvin? ";
      cin >> k;

      cout << endl;

      k_to_f = 1.8 * k_to_c + 32;

      cout << "Kelvin to Fahrenheit = " << k_to_f << " degrees" << endl;
    }

    // Kelvin to Celsius
    if (k_to_temp_choice == 2)
    {  
      cout << "What is the temperature in Kelvin? ";
      cin >> k;

      cout << endl;

      k_to_c = k - 273.2;

      cout << "Kelvin to Celsius = " << k_to_c << " degrees" << endl;
    }

    // Kelvin to Rankine
    if (k_to_temp_choice == 3)
    {
      cout << "What is the temperature in Kelvin? ";
      cin >> k;

      cout << endl;

      k_to_c = k - 273.2;
      k_to_f = 1.8 * k_to_c + 32;
      k_to_r = k_to_f + 459.7;


      cout << "Kelvin to Rankine = " << k_to_r << " degrees" << endl;
    }

  }



 
  // Rankine
  if (ans == 'd' || ans == 'D')
  {
      cout << "From Rankine, what would you like to convert the temperature to? " << endl;
    cout << endl;
    cout << "1. Fahrenheit" << endl;
    cout << "2. Celsius" << endl;
    cout << "3. Kelvin" << endl;
    cout << endl;
    cout << "Type the number and Enter of your choice." << endl;
    cin >> r_to_temp_choice;
    cout << endl;

    // Rankine to Fahrenheit
    if (r_to_temp_choice == 1)
    {
      cout << "What is the temperature in Rankine? ";
      cin >> r;

      cout << endl;

      r_to_f = r - 459.7;

      cout << "Rankine to Fahrenheit = " << r_to_f << " degrees" << endl;
    }

    // Rankine to Celsius
    if (r_to_temp_choice == 2)
    {  
      cout << "What is the temperature in Rankine? ";
      cin >> r;

      cout << endl;
     
      r_to_c = (r - 491.7) / 1.8;
     
      cout << "Rankine to Celsius = " << r_to_c << " degrees" << endl;
    }

    // Rankine to Kelvin
    if (r_to_temp_choice == 3)
    {
      cout << "What is the temperature in Rankine? ";
      cin >> r;

      cout << endl;

      r_to_c = (r - 491.7) / 1.8;
      r_to_k = r_to_c + 273.3;

      cout << "Rankine to Kelvin = " << r_to_k << " degrees" << endl;
    }

  }

  return 0;
}

