#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to write data to the file
void writeData(const string& fileName) {
    ofstream outFile(fileName);

    if (!outFile.is_open()) {
        cerr << "Error opening the file for writing." << endl;
        return;
    }

    cout << "Enter data to write to the file (enter 'exit' to stop):\n";

    string line;
    while (true) {
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        outFile << line << endl;
    }

    outFile.close();
}

// Function to read and display data from the file
void readData(const string& fileName) {
    ifstream inFile(fileName);

    if (!inFile.is_open()) {
        cerr << "Error opening the file for reading." << endl;
        return;
    }

    cout << "Data read from the file:\n";

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
}

// Function to update data in the file
void updateData(const string& fileName) {
    // Append data to the existing file
    ofstream outFile(fileName, ios::app);

    if (!outFile.is_open()) {
        cerr << "Error opening the file for updating." << endl;
        return;
    }

    cout << "Enter additional data to append to the file (enter 'exit' to stop):\n";

    string line;
    while (true) {
        getline(cin, line);
        if (line == "exit") {
            break;
        }
        outFile << line << endl;
    }

    outFile.close();
}

int main() {
    const string fileName = "data.txt";

    // Write data to the file
    writeData(fileName);

    // Read and display data from the file
    readData(fileName);

    // Update data in the file
    updateData(fileName);

    // Read and display updated data from the file
    readData(fileName);

    return 0;
}
