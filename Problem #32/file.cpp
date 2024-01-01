#include <iostream>
#include <cstdlib>

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

void CreateArray(int Arr[100], int ArrayLength)
{

    for (int i = 0; i < ArrayLength; i++)
    {
        Arr[i] = RandomNumber(1, 300);
    }
}

void PrintArray(int Arr[100], int ArrayLength)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
}


bool IsPalindrome(int Arr[100], int ArrayLength)
{   

    for (int i = 0; i < ArrayLength; i++)
    {
        if ( Arr[i] != Arr[ArrayLength - 1 - i])
        {
            return false;
        }
    }

    return true;
}

void PrintIsPalindrome(int Arr[100], int ArrayLength)
{
    if (IsPalindrome(Arr, ArrayLength) == true)
        cout << "✔️" << endl;
    else
        cout << "❌" << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[11] = {12, 12, 12, 4, 45, 5, 45, 4, 12, 12, 12};
    int ArrayLength = 11;

    PrintIsPalindrome(Arr, ArrayLength);

    return 0;
}