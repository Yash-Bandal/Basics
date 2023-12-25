#include <iostream>
#include<string>
#include <fstream>

using namespace std;

int main() {
    char name[100];
    int age;
    string nm;
    
    // Writing data to a file
    ofstream outFile("example.txt"); // Open file for writing

    if (!outFile) 
    {
        cerr << "Error opening file for writing!" << endl;
        return 1;
    }
    
    cout<<"Enter Your name:"<<endl;
    cin>>nm;;
    outFile<<nm<<endl;
    
    cout<<"Enter age:"<<endl;
    cin>>age;
    outFile<<age<<endl;
   
  // Close the file
    outFile.close();
    
    

    // Reading data from a file
    ifstream inFile("example.txt"); // Open file for reading
    
    if (!inFile) {
        cerr << "Error opening file for reading!" << endl;
        return 1;
    }
    // Read and print data from the file
    string line;
    while (getline(inFile, line))
    {
        cout << line << endl;
    }


    // Close the file
    inFile.close();

    return 0;
}
