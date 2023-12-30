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

void PrintFrequency (int Digit ,int Freq)
{
    cout << "Frequqency of " << Digit << " is: " << Freq << " times" << endl;
}

void PrintAllNumbersFrequency (int Number) {
    for (int i = 0; i < 10; i++) {

        int Frequency = CheckFrequency(Number, i);

        if (Frequency > 0) {
            PrintFrequency(i, Frequency);
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Enter a Number");
    // int Digit = ReadPositiveNumber("Enter a digit");
    // PrintFrequency(Digit, CheckFrequency(Number, Digit));
    PrintAllNumbersFrequency(Number);
    return 0;
}