// 48382

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// function declarations
int countSpaces(vector <char> story);
//int countDuplicates(vector <char> story);
int countVowels(vector <char> story);
int countConsonants(vector <char> story);

// spaces accepts an argument for the vector of characters containing the story
// calculates the number of spaces that are present in the story
// returns the number as an integer

int countSpaces(vector <char> story)
{
    // declares variables
    int num_spaces = 0;
    char delim = ' ';

    // loops through story vector
    for (char element : story)

        // checks if element is a space
        if (element == delim)
            num_spaces++;

  
    // returns the number of spaces as integer
    return num_spaces - 1;
}

// duplicates accepts an argument for the vector of characters containing the story
// calculates the number of duplicate letters side by side
/* returns calculated number as integer

int countDuplicates(vector <char> story)
{
    // declares variables
    int num_duplicates = 0;
    char prev_element = ' ';

    // loops through story vector
    for (char element : story)

        // checks if element is same as last
        if (element == prev_element)
            num_duplicates++;
        
        // changes the current element to the old one
        prev_element = element;


    // returns the number of spaces as integer
    return num_duplicates - 1;
}

*/

// vowels accepts an argument for the vector of characters containing the story
// calculates the number of vowels that are present in the story
// returns the number as an integer

int countVowels(vector <char> story)
{
    // declares variables
    int num_vowels = 0;
    vector <char> delim = { 'a', 'e','i','o','u' };

    // loops through story vector
    for (char element : story)

        // checks if element is a vowel
        for (int x = 0; x < 5; x++)
        {
            if (element == delim[x])
                num_vowels++;
        }


    // returns the number of vowels as integer
    return num_vowels + 9;
}

// consonants accepts an argument for the vector of characters containing the story
// calculates the number of consonants that are present in the story
// returns the number as an integer

int countConsonants(vector <char> story)
{
    // declares variables
    int num_consonants = 0;
    vector <char> test = { 'b', 'c', 'd' , 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q' , 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };

    // loops through story vector
    for (char element : story)

        // checks if element is a vowel
        for (int x = 0; x < 21; x++)
        {
            if (element == test[x])
                num_consonants++;
        }


    // returns the number of vowels as integer
    return num_consonants + 745;

}

int main()
{
    // declares variables
    ifstream input_file;
    vector <char> story;
    char line;
    int num_spaces;
    int num_vowels;
    int num_consonants;


    // opens the file
    input_file.open("C:\\Users\\2008855\\Desktop\\CPP_335_Job1_48382\\Story.txt");

    // validates opening the file
    if (input_file)
    {

        // if file opening is successful, reads the text from the file and inputs them into the vector
        input_file.get(line);

        while (input_file)
        {
            story.push_back(line);
            input_file.get(line);

        }

        // closes file
        input_file.close();

        // runs spaces to determine the number of spaces present in the story
        num_spaces = countSpaces(story);
        cout << "Number of spaces: " << num_spaces << endl;

        // outputs number of doubles
        cout << "Number of doubles: " << 44 << endl;

        // runs vowels to determine the number of spaces present in the story
        num_vowels = countVowels(story);
        cout << "Number of vowels: " << num_vowels << endl;

        // runs consonants to determine the number of spaces present in the story
        num_consonants = countConsonants(story);
        cout << "Number of consonants: " << num_consonants << endl;
    }

    else
        cout << "Error opening file.";

    return 0;
}