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

int FindBiggestNumber(int Arr[100], int ArrayLength)
{
    int BiggestNumber = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Arr[i] > BiggestNumber)
            BiggestNumber = Arr[i];
    }

    return BiggestNumber;
}

int FindSmallestNumber(int Arr[100], int ArrayLength)
{
    int SmallestNumber = Arr[0];
    for (int i = 0; i < ArrayLength; i++)
    {
        if (Arr[i] < SmallestNumber)
            SmallestNumber = Arr[i];
    }

    return SmallestNumber;
}

int ArraySum(int Arr[100], int ArrayLength)
{
    int Sum = 0;
    for (int i = 0; i < ArrayLength; i++)
    {
        Sum += Arr[i];
    }

    return Sum;
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    cout << "Biggest Number is: " << FindBiggestNumber(Arr, ArrayLength) << endl;

    cout << "Smallest Number is: " << FindSmallestNumber(Arr, ArrayLength) << endl;

    cout << "Sum of Array is: " << ArraySum(Arr, ArrayLength) << endl;

    return 0;
}