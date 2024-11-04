//Aaron Lin
//10/29/2024
//Lab 7

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Beginning of Code
int main()
{
    ifstream inFile("game_scores.txt"); //opens input file

    //Variable
    string playerName;
    double score1, score2, score3;

    while (inFile >> playerName >> score1 >> score2 >> score3) { //read the players score

        double average = (score1 * 0.2) + (score2 * 0.3) + (score3 * 0.5); //calculate average
        cout << playerName << " - "; //print the player names

        if (average > 2000) //if the score average is greater than 2000
        {
            cout << "Congrats! You are an Expert!"; //prints: Congrats! You are an Expert!
        } 
        else if (average >= 1800) //if the score average is greater than or equal to 1800
        {
            cout << "Master - Good Job!"; //prints: Master - Good Job!
        }
        else if (average >= 1500) //if the score average is greater than or equal to 1500
        {
            cout << "Advanced - Good Job!"; //prints: Advanced - Good Job!
        }
        else if (average >= 1000) //if the score average is greater than or equal to 1000
        {
            cout << "Intermediate"; //prints: Intermediate
        }
        else //else
        {
            cout << "Beginner - Keep Practicing!"; //prints: Beginner - Keep Practicing!
        }
        cout << endl;
    }

    inFile.close(); //closes the input file
    return 0; //ends code
}

/*
Aaron - Master - Good Job!
Barney - Intermediate
Andrew - Intermediate
*/