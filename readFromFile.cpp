// Carrie Ward

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

// function prototypes
bool openFileIn(fstream &, string);
void showContents(fstream &);

int main() {

    fstream dataFile;

    if (openFileIn(dataFile, "demofile.txt"))
    {
        cout << "File opened successfully." << endl;
        cout << "Now reading data from the file..." << endl;
        showContents(dataFile);
        dataFile.close();
        cout << "Done" << endl;
    }
    else
        cout << "File open error!" << endl;

    return 0;
}

// test to see if file exists
bool openFileIn(fstream &file, string name)
{
    file.open(name, ios::in);
    if (file.fail())
        return false;
    else
        return true;
}

// use a loop to read the names from the file
void showContents(fstream &file)
{
    string line;

    while(file >> line)
    {
        cout << line << endl;
    }
}
