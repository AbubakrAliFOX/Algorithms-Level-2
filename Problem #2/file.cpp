#include <iostream>
using namespace std;

int ReadPositiveNumber()
{
    int Number;
    do
    {
        cout << "Enter a positive number: " << endl;
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

    if (Sum == Number)
    {
        return true;
    }

    return false;
}

void PrintPerfectNumber(int Number)
{
    if (IsPerfect(Number) == true)
        cout << Number << " is perfect" << endl;
    else
        cout << Number << " is not perfect" << endl;
}

int main()
{
    int Number = ReadPositiveNumber();
    PrintPerfectNumber(Number);

    return 0;
}