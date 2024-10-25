#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the input file (FahrenheitTemperature.txt) for reading
    std::ifstream inputFile("FahrenheitTemperature.txt");
    if (!inputFile) {
        std::cerr << "Error opening FahrenheitTemperature.txt!" << std::endl;
        return 1;
    }

    // Open the output file (CelsiusTemperature.txt) for writing
    std::ofstream outputFile("CelsiusTemperature.txt");
    if (!outputFile) {
        std::cerr << "Error creating CelsiusTemperature.txt!" << std::endl;
        return 1;
    }

    // Variables to store city name and temperature in Fahrenheit
    std::string city;
    int tempF;
    double tempC;

    // Read each line from the input file, convert the temperature, and write to the output file
    while (inputFile >> city >> tempF) {
        // Convert Fahrenheit to Celsius: (F - 32) * 5 / 9 = C
        tempC = (tempF - 32) * 5.0 / 9.0;
        // Write the city and temperature in Celsius to the output file
        outputFile << city << " " << tempC << std::endl;
    }

    // Close both files
    inputFile.close();
    outputFile.close();

    std::cout << "Temperature conversion completed. Check CelsiusTemperature.txt for results." << std::endl;

    return 0;
}
