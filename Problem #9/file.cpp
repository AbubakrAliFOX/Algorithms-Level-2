#include <iostream>
#include <string>
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


void PrintReverseNumber(int Number)
{
    int CurrentNumber = 0;
    while (Number > 0)
    {
        int NumberOfDigits = to_string(Number).length();
        int PowerOf10 = pow(10, (NumberOfDigits - 1));
        CurrentNumber = Number / PowerOf10;

        cout << CurrentNumber << endl;

        Number = Number % PowerOf10;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Enter a positive Number");
    PrintReverseNumber(Number);
    return 0;
}