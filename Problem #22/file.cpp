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


bool CheckPrime(int Number)
{
    for (int i = Number - 1; i > 1; i--)
    {
        if (Number % i == 0 || Number == 2)
            return false;
    }

    return true;
}

void PrintPrimeArrayElements(int Arr[100], int ArrayLength) {
    int PrimeArr[100];

    int Counter = 0, PrimeCounter = 0;
    while (Counter < ArrayLength)
    {
        if (CheckPrime(Arr[Counter]) == true) {
            PrimeArr[PrimeCounter] = Arr[Counter];
            PrimeCounter++;
        }
        Counter++;
    }

    PrintArray(PrimeArr, PrimeCounter + 1);
    
    
}

int main()
{
    srand((unsigned)time(NULL));

    int Arr[100];
    int ArrayLength = ReadPositiveNumber("Enter array length?");

    CreateArray(Arr, ArrayLength);
    PrintArray(Arr, ArrayLength);

    PrintPrimeArrayElements(Arr, ArrayLength);




    return 0;
}