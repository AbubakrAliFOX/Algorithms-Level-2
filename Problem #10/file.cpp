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

int ReverseNumber(int Number)
{
    int Remainder = 0, NewNumber = 0, Sum = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        NewNumber = 10 * NewNumber + Remainder;
    }

    return NewNumber;
}

bool IsPalindrome (int Number)
{
    return Number == ReverseNumber(Number);
}

void PrintIsPalindrome (int Number) {
    if (IsPalindrome(Number) == true) 
        cout << "✔️" << endl;
     else 
        cout << "❌" << endl;

}

int main()
{
    int Number = ReadPositiveNumber("Enter a positive Number");
    PrintIsPalindrome(Number);
    return 0;
}