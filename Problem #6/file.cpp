#include <iostream>
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

int SumOfDigits (int Number) {
    
    int Remainder = 0, Sum = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder; 
        Number = Number / 10;
    }

    return Sum;
    
}

void PrintSumOfDigits (int Number) {
    cout << "The sum of numbers is: " << Number << endl;
}

int main() { 
    int Number = ReadPositiveNumber("Enter a number");
    PrintSumOfDigits(SumOfDigits(Number));
    return 0;
}