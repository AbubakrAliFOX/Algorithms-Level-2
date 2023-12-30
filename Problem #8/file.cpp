#include <iostream>
#include <string>
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

int CheckFrequency(int Number, int Digit)
{
    int Remainder = 0, Freq = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        if (Remainder == Digit)
        {
            Freq++;
        }

        Number = Number / 10;
    }

    return Freq;
}

void PrintFrequency (int Freq)
{
    cout << "Frequqency is: " << Freq << " times" << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Enter a Number");
    int Digit = ReadPositiveNumber("Enter a digit");
    PrintFrequency(CheckFrequency(Number, Digit));
    return 0;
}