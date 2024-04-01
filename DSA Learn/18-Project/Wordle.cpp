// Libraries
#include <iostream>
#include <algorithm>
#include <vector>
#include <cctype>
#include <string>
#include <windows.h>
using namespace std;


// Constant Variables for the game
const int WORD_LENGTH = 5;
const int NOT_MATCHED = 0;
const int PARTIAL_MATCHED = 1;
const int MATCHED = 2;

// To convert the entered word to uppercase
void toUpperCase(string &input)
{
    transform(input.begin(), input.end(), input.begin(), [](unsigned char c)
              { return toupper(c); });
}

// To get a random word
string getRandomWord()
{
    vector<string> words = {"HORSE", "SMILE", "MANGO", "GRAPE", "PINED", "STRAW", "BEACH", "DANCE", "CLOUD"};
    return words[rand() % words.size()];
}

// To check if the entered word is valid
bool isValid(string word)
{
    return word.length() == WORD_LENGTH && word.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZ") == string::npos;
}

// To mark the matches
void markMatches(vector<vector<int>> &matches, int currentTry, string targetWord, string guessWord)
{
    for (unsigned int i = 0; i < guessWord.length(); i++)
    {
        matches[currentTry][i] = NOT_MATCHED;
    }

    for (unsigned int i = 0; i < guessWord.length(); i++)
    {
        for (unsigned int j = 0; j < targetWord.length(); j++)
        {
            if (guessWord[i] == targetWord[j])
            {
                if (i == j)
                {
                    matches[currentTry][i] = MATCHED;
                    break;
                }
                else
                {
                    matches[currentTry][i] = PARTIAL_MATCHED;
                }
            }
        }
    }
}

// To check if all the letters are matched
bool isAllMatched(string targetWord, string guessWord)
{
    for (unsigned int i = 0; i < guessWord.length(); i++)
    {
        if (targetWord[i] != guessWord[i])
        {
            return false;
        }
    }
    return true;
}

// To print the wordle
void printWordle(vector<string> tries, vector<vector<int>> matches, int currentTry)
{
    system("cls");
    cout << "  ===========================================================  " << endl;
    cout << "|| $$\\      $$\\                           $$\\ $$\\            ||" << endl;
    cout << "|| $$ | $\\  $$ |                          $$ |$$ |           ||" << endl;
    cout << "|| $$ |$$$\\ $$ | $$$$$$\\   $$$$$$\\   $$$$$$$ |$$ | $$$$$$\\   ||" << endl;
    cout << "|| $$ $$ $$\\$$ |$$  __$$\\ $$  __$$\\ $$  __$$ |$$ |$$  __$$\\  ||" << endl;
    cout << "|| $$$$  _$$$$ |$$ /  $$ |$$ |  \\__|$$ /  $$ |$$ |$$$$$$$$ | ||" << endl;
    cout << "|| $$$  / \\$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |$$   ____| ||" << endl;
    cout << "|| $$  /   \\$$ |\\$$$$$$  |$$ |      \\$$$$$$$ |$$ |\\$$$$$$$\\  ||" << endl;
    cout << "|| \\__/     \\__| \\______/ \\__|       \\_______|\\__| \\_______| ||" << endl;
    cout << "  ===========================================================  " << endl;

    for (int i = 0; i <= currentTry && i < tries.size(); i++)
    {
        string separator = "-";
        string padding = "|";
        string text = "|";

        for (unsigned int j = 0; j < tries[i].length(); j++)
        {
            separator += "------";
            padding += "     |";
            char value = toupper(tries[i][j]);
            text += "  ";

            if (matches[i][j] == PARTIAL_MATCHED)
            {
                text += "\033[33m";
            }
            else if (matches[i][j] == MATCHED)
            {
                text += "\033[32m";
            }

            text += value;

            if (matches[i][j] == PARTIAL_MATCHED || matches[i][j] == MATCHED)
            {
                text += "\033[m";
            }

            text += "  |";

            if (j == tries[i].length() - 1)
            {
                if (i == 0)
                {
                    cout << separator << endl;
                }

                cout << padding << endl;
                cout << text << endl;
                cout << padding << endl;
                cout << separator << endl;
            }
        }
    }
}

// Main Function
int main()
{
    int numberOfTries = 6;
    vector<string> tries(numberOfTries);
    vector<vector<int>> matches(numberOfTries, vector<int>(WORD_LENGTH));
    string targetWord = getRandomWord();
    toUpperCase(targetWord);

    string input;
    int currentTry = 0;

    printWordle(tries, matches, currentTry);

    while (currentTry < numberOfTries)
    {
        do
        {
            cout << "Enter your guess (word length must be " + to_string(WORD_LENGTH) + ") or type Q/q to quit : ";
            getline(cin, input);
            toUpperCase(input);
        } while (input != "Q" && !isValid(input));

        if (input == "Q")
        {
            cout << "Quitting the game..." << endl;
            break;
        }

        tries[currentTry] = input;
        markMatches(matches, currentTry, targetWord, input);
        printWordle(tries, matches, currentTry);
        currentTry++;

        if (isAllMatched(targetWord, input))
        {
            cout << " YOU WON!!! -> You guessed the word correctly!" << endl;
            break;
        }
        else if (currentTry == numberOfTries)
        {
            cout << " YOU LOST!!! -> You ran out of tries!" << endl;
            break;
        }
    }

    return 0;
}