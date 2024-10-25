#include "InvestmentCalculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Constructor to initialize the class with user inputs
InvestmentCalculator::InvestmentCalculator(double initialAmount, double monthlyDeposit, double annualInterest, int years)
    : m_initialAmount(initialAmount), m_monthlyDeposit(monthlyDeposit), m_annualInterest(annualInterest), m_years(years) {}

// Private method to calculate monthly compounded interest
double InvestmentCalculator::calculateMonthlyInterest(double balance, double monthlyDeposit) {
    double monthlyRate = (m_annualInterest / 100) / 12;
    return (balance + monthlyDeposit) * monthlyRate;
}

// Method to display results without monthly deposits
void InvestmentCalculator::displayWithoutMonthlyDeposits() {
    double balance = m_initialAmount;
    double yearEndInterest;

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "=======================================================\n";
    cout << setw(5) << "Year" << setw(20) << "Year End Balance" << setw(25) << "Year End Earned Interest\n";
    cout << "-------------------------------------------------------\n";

    for (int year = 1; year <= m_years; year++) {
        yearEndInterest = 0.0;

        // Loop through each month to calculate interest
        for (int month = 1; month <= 12; month++) {
            double monthlyInterest = calculateMonthlyInterest(balance, 0);
            yearEndInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        // Output the result for the year
        cout << setw(5) << year << setw(20) << fixed << setprecision(2) << balance
            << setw(25) << yearEndInterest << endl;
    }
}

// Method to display results with monthly deposits
void InvestmentCalculator::displayWithMonthlyDeposits() {
    double balance = m_initialAmount;
    double yearEndInterest;

    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "=====================================================\n";
    cout << setw(5) << "Year" << setw(20) << "Year End Balance" << setw(25) << "Year End Earned Interest\n";
    cout << "-----------------------------------------------------\n";

    for (int year = 1; year <= m_years; year++) {
        yearEndInterest = 0.0;

        // Loop through each month to calculate interest with monthly deposits
        for (int month = 1; month <= 12; month++) {
            double monthlyInterest = calculateMonthlyInterest(balance, m_monthlyDeposit);
            yearEndInterest += monthlyInterest;
            balance += monthlyInterest + m_monthlyDeposit;
        }

        // Output the result for the year
        cout << setw(5) << year << setw(20) << fixed << setprecision(2) << balance
            << setw(25) << yearEndInterest << endl;
    }
}
