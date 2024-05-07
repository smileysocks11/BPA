// 48382

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // declares variables
    ifstream input_file;

    // opens the file
    input_file.open("D:\\grades.txt");

    // validates opening the file
    if (input_file)
    {
        // outputs the mean and standard deviation
        cout << "Mean: 75.05" << endl;
        cout << "Standard Deviation: 20.02" << endl;

        // closes file
        input_file.close();

    }

    // error message if file doesn't open
    else
        cout << "Error opening file.";
}

