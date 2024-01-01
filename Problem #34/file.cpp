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
        Arr[i] = RandomNumber(-200, 300);
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

int PositiveCounter(int Arr[100], int ArrayLength)
{   
    int Counter = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Arr[i] >= 0) {
            Counter++;
        }
    }

    return Counter;
}

int NegativeCounter(int Arr[100], int ArrayLength)
{   
    int Counter = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Arr[i] < 0) {
            Counter++;
        }
    }

    return Counter;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    

    cout << "Positive numbers are: " << PositiveCounter(Arr, ArrayLength) << endl;
    cout << "Negative numbers are: " << NegativeCounter(Arr, ArrayLength) << endl;

    return 0;
}