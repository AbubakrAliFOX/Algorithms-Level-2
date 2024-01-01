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

void CreateArrayElement(int Arr[100], int OddCounter, int Element)
{
    Arr[OddCounter] = Element;
}

bool CheckOdd(int Element)
{
    return Element % 2 != 0;
}

bool CheckEven(int Element)
{
    return Element % 2 == 0;
}

void CreateOddNumbersArray(int Arr[100], int Arr2[100], int ArrayLength, int &OddCounter)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (CheckOdd(Arr[i]))
        {
            CreateArrayElement(Arr2, OddCounter, Arr[i]);
            OddCounter++;

        }
    }
}

void CreateEvenNumbersArray(int Arr[100], int Arr2[100], int ArrayLength, int &EvenCounter)
{
    for (int i = 0; i < ArrayLength; i++)
    {
        if (CheckEven(Arr[i]))
        {
            CreateArrayElement(Arr2, EvenCounter, Arr[i]);
            EvenCounter++;

        }
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], Arr2[100], Arr3[100];
    int OddCounter = 0, EvenCounter;
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    CreateOddNumbersArray(Arr, Arr2, ArrayLength, OddCounter);

    CreateEvenNumbersArray(Arr, Arr3, ArrayLength, EvenCounter);

    PrintArray(Arr3, EvenCounter);
    cout << "Odd numbers are: " << EvenCounter << endl;

    return 0;
}