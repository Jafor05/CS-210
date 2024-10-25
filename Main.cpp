#include "GroceryTracker.h"
#include <iostream>

int main() {
    GroceryTracker tracker;

    // Load items from the input file
    tracker.loadItems("CS210_Project_Three_Input_File.txt");

    // Create a backup of the item frequencies
    tracker.createBackupFile("frequency.dat");

    // Menu and logic here...

    return 0;
}
