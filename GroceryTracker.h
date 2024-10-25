#pragma#ifndef GROCERYTRACKER_H
#define GROCERYTRACKER_H

#include <iostream>
#include <fstream>
#include <map>
#include <string>

class GroceryTracker {
private:
    std::map<std::string, int> itemFrequencies;  // Map to store item frequencies

public:
    GroceryTracker();  // Constructor
    void loadItems(const std::string& inputFileName);  // Load items from input file
    int getItemFrequency(const std::string& item);  // Get the frequency of a specific item
    void displayAllFrequencies();  // Display all item frequencies
    void displayHistogram();  // Display a histogram of frequencies
    void createBackupFile(const std::string& backupFileName);  // Create a backup file
};

#endif
once
