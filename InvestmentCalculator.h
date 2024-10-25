#pragma once
#ifndef AIRGEAD_BANKING_INVESTMENTCALCULATOR_H_
#define AIRGEAD_BANKING_INVESTMENTCALCULATOR_H_

class InvestmentCalculator {
private:
    // Private member variables to hold investment details
    double m_initialAmount;
    double m_monthlyDeposit;
    double m_annualInterest;
    int m_years;

    // Private methods for compound interest calculation
    double calculateMonthlyInterest(double balance, double monthlyDeposit);

public:
    // Constructor
    InvestmentCalculator(double initialAmount, double monthlyDeposit, double annualInterest, int years);

    // Method to calculate and display the investment growth without additional deposits
    void displayWithoutMonthlyDeposits();

    // Method to calculate and display the investment growth with monthly deposits
    void displayWithMonthlyDeposits();
};

#endif // AIRGEAD_BANKING_INVESTMENTCALCULATOR_H_
