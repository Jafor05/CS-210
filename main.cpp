#include "InvestmentCalculator.h"
#include <iostream>

using namespace std;

// Function to get user input
double getInput(string prompt) {
    double value;
    cout << prompt;
    while (!(cin >> value) || value <= 0) {
        cout << "Please enter a valid positive number.\n";
        cin.clear();
        cin.ignore(1000, '\n');
        cout << prompt;
    }
    return value;
}

int main() {
    // Get user inputs
    double initialInvestment = getInput("Initial Investment Amount: ");
    double monthlyDeposit = getInput("Monthly Deposit: ");
    double annualInterest = getInput("Annual Interest (in %): ");
    int years = static_cast<int>(getInput("Number of Years: "));

    // Display a message to the user to continue
    cout << "\nPress any key to continue...\n";
    cin.ignore();
    cin.get();

    // Create an instance of InvestmentCalculator and display results
    InvestmentCalculator calculator(initialInvestment, monthlyDeposit, annualInterest, years);

    // Display results without additional monthly deposits
    calculator.displayWithoutMonthlyDeposits();

    // Display results with additional monthly deposits
    calculator.displayWithMonthlyDeposits();

    return 0;
}
