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

bool IsPerfect(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }

    return Sum == Number;
}

void PrintPerfectNumber(int Number)
{
    if (IsPerfect(Number) == true)
        cout << Number << " ✔️" << endl;
    else
        cout << Number << " ❌" << endl;
}

void PrintPerfectNumbersTo(int MaxRange)
{
    for (int i = 1; i <= MaxRange; i++) {
        PrintPerfectNumber(i);
    }
}

int main()
{
    int Number = ReadPositiveNumber("Enter max range");
    // PrintPerfectNumber(Number);
    PrintPerfectNumbersTo(Number);

    return 0;
}