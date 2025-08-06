/* Temperature converter */
#include <iostream>
using namespace std;

int main() {
    int choice;
    double temperature, convertedTemperature;

    cout << "***** Temperature Converter *****" << endl;
    cout << "Which unit do you want to convert from?" << endl;
    cout << "1. Celsius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;

    cin >> choice; 

    switch (choice) {
        case 1: // Celsius to Fahrenheit
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            convertedTemperature = (temperature * 9.0 / 5.0) + 32.0;
            cout << "Temperature in Fahrenheit: " << convertedTemperature << "°F" << endl;
            break;

        case 2: // Fahrenheit to Celsius
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            convertedTemperature = (temperature - 32.0) * 5.0 / 9.0;
            cout << "Temperature in Celsius: " << convertedTemperature << "°C" << endl;
            break;

        case 3: // Kelvin to Celsius
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            convertedTemperature = temperature - 273.15;
            cout << "Temperature in Celsius: " << convertedTemperature << "°C" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

}