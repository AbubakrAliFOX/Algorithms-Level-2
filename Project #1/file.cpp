#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int ReadPositiveNumber(string Msg)
{
    int Number;
    do
    {
        cout << Msg << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int GenerateRandomChoice () {
    return RandomNumber(1, 3);
    
}

int GetWinner(int PlayerChoice, int ComputerChoice) {
    if (PlayerChoice == ComputerChoice) {
        return 0;
    } else if (PlayerChoice == 1 && ComputerChoice == 2) {
        return 2;
    } else if (PlayerChoice == 1 && ComputerChoice == 3) {
        return 1;
    } else if (PlayerChoice == 2 && ComputerChoice == 1) {
        return 1;
    } else if (PlayerChoice == 2 && ComputerChoice == 3) {
        return 2;
    } else if (PlayerChoice == 3 && ComputerChoice == 1) {
        return 2;
    } else if (PlayerChoice == 3 && ComputerChoice == 2) {
        return 1;
    }
    
}


void PrintRoundResult (int Winner, int Round, int PlayerChoice, int ComputerChoice) {
    string WinnerName;
    if (Winner == 1) {
        WinnerName = "Player";
    } else if (Winner == 2) {
        WinnerName = "Computer";
    } else {
        WinnerName = "Draw";
    }
    cout << "------------------- " << "Round [" << Round << "]" << " -------------------" << endl;
    cout << "Player Choice: " << PlayerChoice << endl;
    cout << "Computer Choice: " << ComputerChoice << endl;
    cout << "Winner: " << WinnerName << endl;

    cout << "----------------------------------------------" << endl;
}

void StartRound (int Round, int &PlayerWinCounter, int &ComputerWinCounter) {
    cout << "\n \n \n Round [" << Round << "] begins: " << endl;
    int PlayerChoice = ReadPositiveNumber("Your Choice: [1] Rock, [2] Paper, [3] Scissors?");

    int ComputerChoice = GenerateRandomChoice();

    int Winner = GetWinner(PlayerChoice, ComputerChoice);
    if (Winner == 1) {
        PlayerWinCounter++;
        PrintRoundResult(1, Round, PlayerChoice, ComputerChoice);
    } else if (Winner == 2) {
        ComputerWinCounter++;
        PrintRoundResult(2, Round, PlayerChoice, ComputerChoice);
    } else if (Winner == 0) {
        PrintRoundResult(0, Round, PlayerChoice, ComputerChoice);
    }
}

void PrintFinalWinner (int Rounds, int PlayerWinCounter, int ComputerWinCounter) {
    string WinnerName;
    if (PlayerWinCounter > ComputerWinCounter) {
        WinnerName = "Player";
    } else if (PlayerWinCounter < ComputerWinCounter) {
        WinnerName = "Computer";
    } else {
        WinnerName = "Draw";
    }

    cout << "------------------- " << " Game Over " << " -------------------" << endl;
    cout << "Game Rounds       : " << Rounds << endl;
    cout << "Player Score      : " << PlayerWinCounter << endl;
    cout << "Computer Score    : " << ComputerWinCounter << endl;
    cout << "Draw              : " << Rounds - PlayerWinCounter - ComputerWinCounter << endl;
    cout << "Final Winner      : " << WinnerName << endl;

    cout << "----------------------------------------------" << endl;
}

char PlayAgain () {
    char Answer;
    cout << "Would You like to play again? Y/N?" << endl;
    cin >> Answer;
    return Answer;
}

void StartGame() {
    int Rounds = ReadPositiveNumber("How many rounds would you like to play?");
    int PlayerWinCounter = 0, ComputerWinCounter = 0;

    for (int i = 1; i <= Rounds; i++)
    {
        StartRound(i, PlayerWinCounter, ComputerWinCounter);
    }

    PrintFinalWinner(Rounds, PlayerWinCounter, ComputerWinCounter);
    if (PlayAgain() == 'y') {
        StartGame();
    }
    
}


int main()
{

    StartGame();

    

    return 0;
}